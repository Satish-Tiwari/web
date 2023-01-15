// let extraText = document.querySelector("#extraText");
// let readMore = document.querySelector("#readMore");
// let text = document.getElementById("text");


// readMore.addEventListener("click",()=>{
//     if(extraText.style.display == "none")
//     {
//         extraText.style.display = "block";
//        // let l = 1;
//         // while(l< 11)
//         // {
//             //     console.log(l);
//             //     l += 1;
//             // }
//     }
//     else
//     {
//         extraText.style.display = "none";
//     }
// })

let extraText = document.querySelector("#extraText");
let readMore = document.querySelector("#readMore");
let text = document.getElementById("text");


readMore.addEventListener("click",()=>{
    if(extraText.style.display == "none")
    {
        extraText.style.display = "block";
        extraText.innerText = "Satish";
    }
    else
    {
        extraText.style.display = "none";
    }
})
