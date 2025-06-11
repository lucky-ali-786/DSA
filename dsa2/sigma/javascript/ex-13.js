let button=document.getElementById("but");
button.addEventListener("click",()=>{
    let title=prompt("enter the title");
let cname=prompt("enter the cname");
let views=prompt("enter the views");
let monthsold=prompt("enter the monthsold");
function createcard(title,cname,views,monthsold)
{     
   var a =` <div class="con">
        <span><img
                src="https://i.ytimg.com/vi/_9mTJ84uL1Q/hq720.jpg?sqp=-oaymwEnCNAFEJQDSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLBcKQEqhHqSEGxw0wVcvAvxlpdKtQ"
                alt="" width="100px" height="">
             ${title}
            <br>
            ${cname}
           <br>
           ${views} &nbsp ${monthsold} months ago;
         </span>
        <label class="time">
            30:20
        </label>
    </div>`
    document.querySelector(".container").innerHTML=    document.querySelector(".container").innerHTML+a;
}
createcard(title,cname,views,monthsold);
})

