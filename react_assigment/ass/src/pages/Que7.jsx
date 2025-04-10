import React, { useState } from 'react';

function Que7() {
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [error, setError] = useState('');

  const handleSubmit = (event) => {
    event.preventDefault(); // Prevent form submission

    // Simple validation: Check if email and password are not empty
    if (!email || !password) {
      setError('Both email and password are required!');
    } else {
      setError('');
      alert('Form submitted successfully!'); // Proceed with form submission
      // You can handle the login logic here (e.g., API call)
    }
  };

  return (
    <div style={styles.container}>
      <h2>Login Form</h2>
      <form onSubmit={handleSubmit} style={styles.form}>
        <div style={styles.inputGroup}>
          <label htmlFor="email">Email:</label>
          <input
            type="email"
            id="email"
            value={email}
            onChange={(e) => setEmail(e.target.value)}
            style={styles.input}
          />
        </div>
        <div style={styles.inputGroup}>
          <label htmlFor="password">Password:</label>
          <input
            type="password"
            id="password"
            value={password}
            onChange={(e) => setPassword(e.target.value)}
            style={styles.input}
          />
        </div>
        {error && <p style={styles.error}>{error}</p>}
        <button type="submit" style={styles.button}>Login</button>
      </form>
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem',
    fontFamily: 'Arial, sans-serif',
  },
  form: {
    display: 'inline-block',
    textAlign: 'left',
    backgroundColor: '#f9f9f9',
    padding: '2rem',
    borderRadius: '8px',
    boxShadow: '0 0 10px rgba(0, 0, 0, 0.1)',
  },
  inputGroup: {
    marginBottom: '1rem',
  },
  input: {
    width: '100%',
    padding: '0.8rem',
    fontSize: '1rem',
    marginTop: '0.3rem',
    borderRadius: '4px',
    border: '1px solid #ccc',
  },
  button: {
    padding: '0.8rem 1.5rem',
    fontSize: '1rem',
    backgroundColor: '#007BFF',
    color: '#fff',
    border: 'none',
    borderRadius: '4px',
    cursor: 'pointer',
    width: '100%',
  },
  error: {
    color: 'red',
    marginTop: '1rem',
  },
};

export default Que7;
