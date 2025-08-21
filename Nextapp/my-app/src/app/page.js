"use client"
import Image from "next/image";
import { useRouter } from "next/navigation";

export default function Home() {
  const router = useRouter();
  const handleNavigation = () => {
    router.push("/test");
  };
  return (
    <>
      <h1 className="text-2xl font-bold m-5">Welcome to My App</h1>
      <button onClick={handleNavigation} className="bg-blue-500 text-white px-4 py-2 rounded m-5">
        Go to Test Page
      </button>
    </>
  );
}
