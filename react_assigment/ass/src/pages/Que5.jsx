import React, { useState } from 'react';

function Que5() {
  const [searchTerm, setSearchTerm] = useState('');
  const [names, setNames] = useState([
    'John Doe', 'Jane Smith', 'Alice Johnson', 'Bob Brown', 'Charlie Clark', 'David White'
  ]);

  const handleSearch = (event) => {
    setSearchTerm(event.target.value);  // Update the searchTerm state as the user types
  };

  const filteredNames = names.filter(name =>
    name.toLowerCase().includes(searchTerm.toLowerCase())  // Filter names based on searchTerm
  );

  return (
    <div style={styles.container}>
      <input
        type="text"
        value={searchTerm}
        onChange={handleSearch}
        placeholder="Search for a name..."
        style={styles.input}
      />
      <ul style={styles.list}>
        {filteredNames.length > 0 ? (
          filteredNames.map((name, index) => (
            <li key={index} style={styles.listItem}>{name}</li>
          ))
        ) : (
          <li style={styles.noResults}>No results found</li>
        )}
      </ul>
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem'
  },
  input: {
    padding: '0.5rem',
    fontSize: '1rem',
    marginBottom: '1rem',
    borderRadius: '8px',
    border: '1px solid #ccc',
    width: '80%',
    maxWidth: '400px'
  },
  list: {
    listStyleType: 'none',
    padding: '0',
    marginTop: '1rem'
  },
  listItem: {
    padding: '0.5rem',
    fontSize: '1.1rem',
    backgroundColor: '#f4f4f4',
    marginBottom: '0.5rem',
    borderRadius: '4px',
  },
  noResults: {
    fontSize: '1rem',
    color: '#888'
  }
};

export default Que5;
