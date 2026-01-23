function isLegal(users){
    let legalUsers = []

    for(i=0; i< users.length; i++){
        if(users[i].age >= 18){
            legalUsers.push(users[i])
        }
    }

    return legalUsers
}

const users = [{
    name: "Yash", 
    age : 20
},{
    name: "kirat",
    age : 17
},{
    name : "Harkirat",
    age : 35
}]

let legalAllowedUsers =  isLegal(users)
console.log(legalAllowedUsers)