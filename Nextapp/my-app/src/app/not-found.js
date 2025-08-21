import Link from "next/link";
export default function NotFound() {
  return (
    <main style={{ padding: "20px", fontFamily: "sans-serif" }}>
      <h1 style={{ color: "blue" }}>Page - Not Found</h1>
      <p>The information you are looking for does not exist.</p>
      <button><Link href="/">Go back to Home</Link></button>
    </main>
  );
}