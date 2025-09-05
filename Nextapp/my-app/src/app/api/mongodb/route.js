import { MongoClient } from "mongodb";
import { NextResponse } from "next/server";

const uri = "mongodb+srv://Shubham:NITa%401234@cluster0.z5xy2.mongodb.net/";
const client = new MongoClient(uri);

export async function GET() {
  try {
    await client.connect();
    const db = client.db("DB_ASSI");              // database name
    const coll = db.collection("Companies");       // collection name

    const docs = await coll.find({}).toArray();

    // Convert ObjectId -> string so JSON can handle it
    const cleanDocs = docs.map(d => ({ ...d, _id: d._id.toString() }));

    return NextResponse.json(cleanDocs, { status: 200 });
  } catch (err) {
    console.error("Error in GET /api/companies:", err);
    return NextResponse.json({ error: "Internal Server Error" }, { status: 500 });
  } finally {
    await client.close();
  }
}