function isLegal(age){
    if(age >= 18){
        console.log("you are allowed to vote")
    }else{
        console.log("you are not allow to vote")
    }
}


for(let i=1; i<=100; i++){
    console.log(i) + isLegal(i)
}
