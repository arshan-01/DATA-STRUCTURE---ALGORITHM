
// const ages = [32, 33, 16, 40];
// // Returns [32, 33, 40]

//  a = ages.filter(function(age) {
//   return age >= 18;
// });


// console.log("New Filter Array " ,a);




// const myArray=[12,18,12,98,2];
// console.log("New Filter Array " ,a);
// const adult=(myArray)=>{
//    let aged = myArray>=18;
//     return aged;
// }

// let a=myArray.filter(adult)


//finding maximum
// const number = [3,45,74,763,78,22,4,89];

// const output =number.reduce(function (max, num) {
  
//    if(num>max)
//    {
//      max = num;
     
//    }
//    return max;
// },0);

// console.log("Reduced Array " ,output);





//Finding sum
// const number = [3,45,74,763,78,22,4,89];

// const output =number.reduce(function (sum, num) {
  
//    sum =sum+num;
//    return sum;
// },0);

// console.log("Reduced Array " ,output);





const persons = [
  {firstname : "Malcom", lastname: "Reynolds", age:13},
  {firstname : "Kaylee", lastname: "Frye" , age:12},
  {firstname : "Jayne", lastname: "Cobb" , age:14}
];

// const output =persons.reduce(function (acc, person) {
//    if(acc[person.age==13])
//    {
//     acc=acc[person.firstname];
//    }
   
//    return acc;
// },{});

// console.log("Reduced Array " ,output);

//display name of person of age 13
const output =persons.filter((person)=>person.age==13).map((person) =>person.firstname );
console.log(output);

// const output=persons.reduce((acc,person)=>{
//   if(person.age>=13)
//   acc.push(person.firstname);
//   return acc;
//   },[]);
// console.log(output);

// const basketItems = [
//   {productName: 'Lenovo Carbon', price: 2145},
//    { productName: 'Macbook Pro',price: 3111},
//    {productName: 'Google Home',price: 250}
//  ];
//  let basketSum = basketItems.reduce((acc, basketItem) => {
//   return acc + basketItem.price
//  }, 0);                 // Take notice of last argument is a number
//  console.log("sum in basket", basketSum); // Returns 5506