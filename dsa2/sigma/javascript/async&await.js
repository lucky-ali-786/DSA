async function getdata() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(400);
        }, 2000);
    })
}
console.log("hello world");
console.log("data is there in the world");
let data=await getdata();
console.log(data);
console.log("data is processed successfully");