let boxes=document.getElementsByClassName("box");
function randomcolor(){
    let a=(Math.random()*255);
    let b=(Math.random()*255);
    let c=(Math.random()*255);
    return `rgb(${a},${b},${c})`;

}
for(let i=0;i<boxes.length;i++){
    boxes[i].style.backgroundColor=randomcolor();
    boxes[i].style.color=randomcolor();
}