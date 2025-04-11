import { useState } from "react";

const Que9 = () => {
  const [theme, setTheme] = useState("light");

  function handleClick() {
    setTheme(prevTheme => (prevTheme === "light" ? "dark" : "light"));
  }

  return (
    <div
      style={{
        backgroundColor: theme === "light" ? "white" : "black",
        height: "100vh",
        color: theme === "light" ? "black" : "white",
      }}
    >
      <button
        onClick={handleClick}
        style={{ position: "absolute", height: "50px" , width:"300px" , top: "30%", left: "20%" }}
      >
        Toggle Theme
      </button>
    </div>
  );
};

export default Que9;
