"use client";
import { useParams } from "next/navigation";

export default function Page() {
  const params = useParams();
  const id = params.var; // matches [var] folder name

  return (
    <div>
      <h1>Dynamic Page</h1>
      <p>ID: {id}</p>
    </div>
  );
}
