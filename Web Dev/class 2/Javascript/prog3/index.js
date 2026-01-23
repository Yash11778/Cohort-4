
//object/ HashMaps/ Key-Value Pair


function isLegal(name, age){
    if (age <= 18){
        console.log(name + " Allowed to vote")
    }else{
        console.log(name + " Not allowed to vote")
    }
}

var user1 ={
    name : "Yash",
    age : 20,
    password : "abska22jak"
}

var user2 = {
    name : "Kirat",
    age : 35,
    password : "sdnkjenw"
}

isLegal(user1.name, user1.age)
isLegal(user2.name, user2.age)