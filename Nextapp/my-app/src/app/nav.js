import Link from "next/link"

export default function Nav(){
    return (
        <>
        <div className="flex">
          <nav className="bg-gray-200 px-6 py-4 flex gap-6">
            <h2><Link href="/" className="text-gray-800 font-semibold hover:text-blue-600">
              MYsite   
            </Link></h2>
            <hr />
            <Link href="/test" className="text-gray-800 font-semibold hover:text-blue-600">
              Test
            </Link>
            <Link href="/product" className="text-gray-800 font-semibold hover:text-blue-600">
              Product
            </Link>
            <Link href="/github" className="text-gray-800 font-semibold hover:text-blue-600">
              Github
            </Link>
          </nav>
        </div>
        </>
    )
}