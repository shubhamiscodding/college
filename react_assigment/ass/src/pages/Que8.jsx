import React, { useState } from 'react';

function Que8() {
  const [activeIndex, setActiveIndex] = useState(null);

  // Sample questions and answers
  const data = [
    { question: 'What is React?', answer: 'React is a JavaScript library for building user interfaces.' },
    { question: 'What is useState?', answer: 'useState is a React hook that lets you add state to functional components.' },
    { question: 'What is JSX?', answer: 'JSX is a syntax extension for JavaScript, it allows writing HTML structures in the same file as JavaScript code.' },
  ];

  const toggleAnswer = (index) => {
    // Toggle the answer visibility based on the index
    if (activeIndex === index) {
      setActiveIndex(null); // Close if the same question is clicked
    } else {
      setActiveIndex(index); // Open the clicked question
    }
  };

  return (
    <div style={styles.container}>
      <h2>FAQ Accordion</h2>
      <div style={styles.accordion}>
        {data.map((item, index) => (
          <div key={index} style={styles.item}>
            <div
              onClick={() => toggleAnswer(index)}
              style={styles.question}
            >
              {item.question}
            </div>
            {activeIndex === index && (
              <div style={styles.answer}>
                {item.answer}
              </div>
            )}
          </div>
        ))}
      </div>
    </div>
  );
}

const styles = {
  container: {
    textAlign: 'center',
    marginTop: '2rem',
    fontFamily: 'Arial, sans-serif',
  },
  accordion: {
    width: '60%',
    margin: '0 auto',
    border: '1px solid #ccc',
    borderRadius: '8px',
    backgroundColor: '#f9f9f9',
  },
  item: {
    padding: '1rem',
    borderBottom: '1px solid #ddd',
  },
  question: {
    fontSize: '1.2rem',
    fontWeight: 'bold',
    cursor: 'pointer',
  },
  answer: {
    marginTop: '1rem',
    fontSize: '1rem',
    color: '#333',
    padding: '1rem',
    backgroundColor: '#f1f1f1',
    borderRadius: '4px',
  },
};

export default Que8;
