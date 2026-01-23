
// Arrays and Objects


function isLegal(user, age){
    if(user.age >= 18){
        console.log(user.name + " is allowed to vote")
    }else {
        console.log(user.name + " is not allowed to vote")
    }
}


var users = [{
    name : "Yash",
    age : 20,
    password : "najbs"
},{
    name : "Harkirat",
    age : 35,
    password : "awsjbds"
},{
    name : "Kirat",
    age : 15,
    password : "najnsoe"
}]



for(let i=0; i<users.length; i++){
    isLegal(users[i])
}