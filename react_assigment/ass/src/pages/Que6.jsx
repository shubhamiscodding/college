import React, { useState, useEffect } from 'react';

function Que6() {
  const [users, setUsers] = useState([]);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

  // Fetch users data when the component is mounted
  useEffect(() => {
    fetch('https://jsonplaceholder.typicode.com/users')
      .then(response => {
        if (!response.ok) {
          throw new Error('Failed to fetch users');
        }
        return response.json();
      })
      .then(data => {
        setUsers(data);  // Set the users data to state
        setLoading(false);  // Set loading to false after data is fetched
      })
      .catch(err => {
        setError(err.message);  // Set the error message if the fetch fails
        setLoading(false);  // Set loading to false after error occurs
      });
  }, []);  // Empty dependency array ensures this runs once when the component mounts

  if (loading) {
    return <p>Loading...</p>;  // Show loading message while fetching
  }

  if (error) {
    return <p>Error: {error}</p>;  // Show error message if fetch fails
  }

  return (
    <div style={styles.container}>
      <h2>User List</h2>
      <ul style={styles.list}>
        {users.map((user) => (
          <li key={user.id} style={styles.listItem}>
            <h3>{user.name}</h3>
            <p>Email: {user.email}</p>
            <p>Phone: {user.phone}</p>
            <p>Website: {user.website}</p>
          </li>
        ))}
      </ul>
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem',
    fontFamily: 'Arial, sans-serif',
  },
  list: {
    listStyleType: 'none',
    padding: 0,
  },
  listItem: {
    padding: '1rem',
    backgroundColor: '#f4f4f4',
    marginBottom: '1rem',
    borderRadius: '8px',
    boxShadow: '0 0 5px rgba(0, 0, 0, 0.1)',
  },
};

export default Que6;
