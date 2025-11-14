import './App.css'
import Navbar from './components/Navbar.jsx'
import Home from './components/Home.jsx'
import Footer from './components/Footer.jsx'
function App() {
  
  return (
      <div style={{width:"100vw", height:"100vh" , margin:"0", padding:"0"}}>
        <Navbar />
        <Home />
        <Footer />
      </div>
  )
}

export default App
