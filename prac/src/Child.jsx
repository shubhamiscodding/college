import React, { useState, useEffect, useRef } from "react";
import { Link, useNavigate } from "react-router-dom";

const Child = () => {
  const [data, setData] = useState([]);
  const buttonRef = useRef(null);
  const navigate = useNavigate();

  useEffect(() => {
    fetch("https://jsonplaceholder.typicode.com/users")
      .then((response) => response.json())
      .then((data) => setData(data))
      .catch((err) => console.log(err));
  }, []);

  // Focus the button after mount
  useEffect(() => {
    if (buttonRef.current) {
      buttonRef.current.focus();
    }
  }, []);

  const handleClick = () => {
    navigate("/home");
  };

  return (
    <>
      <Link to="/home">home</Link>
      <Link to="/run">run</Link>

      <div>
        {data.map((item) => (
          <h1 key={item.id}>{item.name}</h1>
        ))}
      </div>

      <button
        ref={buttonRef}
        className="bg-dark p-3 h-3 w-3"
        onClick={handleClick}
      >
        Go Home
      </button>
    </>
  );
};

export default Child;
