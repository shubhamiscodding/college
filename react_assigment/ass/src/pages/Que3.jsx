import React, { useState } from 'react';

function Que3() {
  const [isVisible, setIsVisible] = useState(false);

  const toggleVisibility = () => {
    setIsVisible(prevState => !prevState);
  };

  return (
    <div style={styles.container}>
      <button onClick={toggleVisibility} style={styles.button}>
        {isVisible ? 'Hide' : 'Show'} Text
      </button>
      {isVisible && <p style={styles.text}>Hello World</p>}  {/* Conditional rendering */}
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem'
  },
  button: {
    padding: '0.5rem 1rem',
    fontSize: '1rem',
    marginBottom: '1rem'
  },
  text: {
    fontSize: '1.5rem',
    color: '#333'
  }
};

export default Que3;
