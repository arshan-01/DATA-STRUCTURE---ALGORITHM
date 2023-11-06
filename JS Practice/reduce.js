const ages = [32, 33, 116, 40];
let ans = ages.reduce((acc, cur) => {
  if (cur > acc) {
    acc = cur;
  }
  return acc;
});

console.log(ans);


// Max , Min
// const ages = [32, 33, 116, 40];
// let ans = ages.reduce(
//   (acc, cur) => {
//     if (cur > acc.max) {
//       acc.max = cur;
//     }
//     if (cur < acc.min) {
//       acc.min = cur;
//     }
//     return acc;
//   },
//   { min: Infinity, max: -Infinity }
// );

// console.log(ans);

// const persons = [
//   { firstname: "Malcom", lastname: "Reynolds", age: 13 },
//   { firstname: "Kaylee", lastname: "Frye", age: 12 },
//   { firstname: "Jayne", lastname: "Cobb", age: 14 },
// ];
// let ans = persons.reduce((acc, cur) => {
//   if (cur.age > 12) {
//     acc.push(cur);
//   }
//   return acc;
// }, []);

// console.log(ans);

// const output = persons.reduce(function (acc, person) {
//   if (person.age === 13) {
//     acc.push(person.firstname);
//   }

//   return acc;
// }, []);
// console.log(output);
