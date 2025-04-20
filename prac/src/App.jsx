import { useState, } from 'react'
import './App.css'
import Child from "./Child"
import { BrowserRouter, Routes, Route } from "react-router-dom"

function App() {


  return (
    <>

      <BrowserRouter>
        <Routes>
          <Route path='*' element={<h1>404 not found</h1>} />
          <Route path='/home' element={<h1>home</h1>} />
          <Route path='/run' element={<h1>run</h1>} />
        </Routes>
        <Child />
      </BrowserRouter>

    </>
  )
}

export default App
