async function getdata() {
    return new Promise((resolve, reject) => {
        setTimeout(()=> {
            var cd=`<br> <span> Reading your files</span>`
            document.querySelector(".cont").innerHTML= document.querySelector(".cont").innerHTML+cd;
        }, 1000);
         setTimeout(()=> {
            var cd=`<br> <span>Password Files detected</span>`
            document.querySelector(".cont").innerHTML= document.querySelector(".cont").innerHTML+cd;
        }, 5000);
         setTimeout(()=> {
            var cd=`<br> <span>Sending all passwords to server</span>`
            document.querySelector(".cont").innerHTML= document.querySelector(".cont").innerHTML+cd;
        }, 9000);
         setTimeout(()=> {
            var cd=`<br> <span>Cleaning up</span>`
            document.querySelector(".cont").innerHTML= document.querySelector(".cont").innerHTML+cd;
        }, 13000);
        resolve();
    })
   
}
let dta=getdata();




