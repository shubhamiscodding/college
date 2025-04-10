import React, { useState } from 'react';

function Que4() {
  const [text, setText] = useState('');

  const handleChange = (event) => {
    setText(event.target.value);  // Update the text state
  };

  return (
    <div style={styles.container}>
      <textarea
        value={text}
        onChange={handleChange}
        placeholder="Type something..."
        style={styles.textarea}
      />
      <p style={styles.characterCount}>Character Count: {text.length}</p> {/* Display character count */}
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem'
  },
  textarea: {
    width: '80%',
    height: '150px',
    padding: '1rem',
    fontSize: '1rem',
    marginBottom: '1rem',
    borderRadius: '8px',
    border: '1px solid #ccc'
  },
  characterCount: {
    fontSize: '1rem',
    color: '#555'
  }
};

export default Que4;
