let arr=[2,4,3,2,5];
let newarr=[];
newarr=arr.map((e)=>{
    return e;
})
const p = (e)=>{
    if(e==2) return true;
     return false;
}
console.log(newarr.filter(p));