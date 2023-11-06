// To get a number, for example between 0 and 8, multiply your answer by 8: Math.random() * 8 To get it to be a whole number, i.e. an integer, apply Math.floor, which rounds down to the nearest whole number: Math.floor(Math.random() * 8) To get a whole number between 1 and 8, add 1 to the answer: Math.floor(Math.random() * 8 + 1) 

let output = (Math.floor(Math.random()*8)+1);
console.log(`Random number is ${output}`);