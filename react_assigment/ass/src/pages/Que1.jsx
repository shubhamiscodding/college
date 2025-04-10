import React, { useState } from 'react';

function Que1() {
  const [count, setCount] = useState(0);

  const increment = () => setCount(prev => prev + 1);
  const decrement = () => setCount(prev => prev - 1);
  const reset = () => setCount(0);

  return (
    <div style={styles.container}>
      <h2>Counter: {count}</h2>
      <div>
        <button onClick={increment} style={styles.button}>Increment</button>
        <button onClick={decrement} style={styles.button}>Decrement</button>
        <button onClick={reset} style={styles.button}>Reset</button>
      </div>
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem'
  },
  button: {
    margin: '0.5rem',
    padding: '0.5rem 1rem',
    fontSize: '1rem'
  }
};

export default Que1;
