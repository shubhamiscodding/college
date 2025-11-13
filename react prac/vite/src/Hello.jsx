import { useState } from 'react';

function Hello() {
  const [count, setCount] = useState(10);

  // function dec(){
  //   const time = setInterval(()=>{
  //     setCount(count-1);
  //   },2000)
  //   if(count === 0) clearTimeout(time);
  // }

  function timer() {
    const time = setInterval(() => {
      setCount((count) => {
        if (count === 1) clearInterval(time);
        // if (stop) { clearInterval(time) }
        return count - 1;
      });
    }, 1000)
    
  }


  // let arr = [1,2,3,4,5];
  // let style = {
  //   color : 'blue',
  //   backgroundColor : 'yellow',
  //   border : '2px solid red',
  //   width : '100px',
  //   textAlign : 'center',
  //   margin : '10px auto'
  // };
  return(
    <>
          {/* <h1>{count}</h1>
      <button onClick={()=>setCount(count*100)}>Increment</button> */}
      {/* {arr.map((item,index)=>{
        return <h1 style={style}  key={index}>{item}</h1>
      })
      } */}

      <p> COUNT : {count}</p>
      <button onClick={() => timer()}>start</button>
      {/* <button onClick={() => timer(true)}>stop</button> */}
        </>
  );
}

export default Hello;