let promise1=new Promise((resolve, reject) => {
     let a=Math.random();
        if(a<0.5) reject("error");
   else{ setTimeout(() => {
      console.log("im done bruh");
        resolve("lucky");
    }, 1000);}
})
//used for detecting reolve if not respolve then it will give error
promise1.then((a)=>{
    console.log(a);
}).catch(()=>{
    console.log("error of catch")
})
//catch is used for errors
let promise2=new Promise((resolve, reject) => {
     let a=Math.random();
        if(a<0.5) reject("error");
   else{ setTimeout(() => {
      console.log("im done bruh 2");
        resolve("lucky2 ");
    }, 1000);}
})
//used for detecting reolve if not respolve then it will give error
promise2.then((a)=>{
    console.log(a);
}).catch(()=>{
    console.log("error of catch")
})
let p3=Promise.all([promise1,promise2]);
p3.then((a)=>{
console.log(a);
}).catch((b)=>{
    console.log(b);
})



//state=initially pending fullfilled if resolved is called and rejected if reject is called;
//result initially undefoned if done then changes to value else error