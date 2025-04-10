import React from 'react';
import { Link } from 'react-router-dom';

function Navbar() {
  // Generate 20 questions dynamically for demo purposes
  const questions = Array.from({ length: 20 }, (_, index) => `Question ${index + 1}`);

  return (
    <nav style={styles.navbar}>
      <div style={styles.navContainer}>
        {questions.map((question, index) => (
          <Link
            key={index}
            to={`/q${index + 1}`}
            style={styles.navLink}
          >
            {question}
          </Link>
        ))}
      </div>
    </nav>
  );
}

const styles = {
  navbar: {
    width: '100%',
    backgroundColor: '#333',
    padding: '1rem 0',
    overflowX: 'auto',  // Allow horizontal scrolling
    whiteSpace: 'nowrap',  // Prevent line breaks
  },
  navContainer: {
    display: 'flex',
    flexWrap: 'nowrap',  // Prevent wrapping, ensure all items stay in a single row
  },
  navLink: {
    color: 'white',
    textDecoration: 'none',
    padding: '0.8rem 1.5rem',
    fontSize: '1.1rem',
    marginRight: '1rem',
    transition: 'background-color 0.3s ease',
  },
};

export default Navbar;
