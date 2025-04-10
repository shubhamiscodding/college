import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Navbar from './com/Navbar';  // Assuming Navbar component is correct
import Que1 from './pages/Que1';    // Replace with actual components
import Que2 from './pages/Que2';
import Que3 from './pages/Que3';
import Que4 from './pages/Que4';
import Que5 from './pages/Que5';
import Que6 from './pages/Que6';
import Que7 from './pages/Que7';

function App() {
  return (
    <Router>
      <Navbar />
      <div className="content">
        <Routes>
          <Route path="/q1" element={<Que1 />} />
          <Route path="/q2" element={<Que2 />} />
          <Route path="/q3" element={<Que3 />} />
          <Route path="/q4" element={<Que4 />} />
          <Route path="/q5" element={<Que5 />} />
          <Route path="/q6" element={<Que6 />} />
          <Route path="/q7" element={<Que7 />} />
          <Route path="*" element={<h2>404 Not Found</h2>} /> {/* Fixed syntax here */}
        </Routes>
      </div>
    </Router>
  );
}

export default App;
