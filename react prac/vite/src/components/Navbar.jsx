

export default function Navbar() {
    return (
        <div>
            <ul style={{ width: "100%", display: "flex", flexDirection: "row", alignContent: "space-around", justifyContent: "space-around", listStyle: "none", backgroundColor: "black", color: "yellow", height: "60px", alignItems: "center" }}>
                <li>Home</li>
                <li>About</li>
                <li>Contect</li>
            </ul>
        </div>
    );
}