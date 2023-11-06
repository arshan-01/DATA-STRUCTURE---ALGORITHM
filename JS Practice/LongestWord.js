const str = "hit control+c anytime to enter REPL";
let words = str.split(" ")

let longestWord = ""

    let max = 0;
for ( let word of words) {
  if(word.length >  max){
    max = word.length
    longestWord = word
  }
       
}

console.log(longestWord)


// 2nd Method
// const str = "hit control+c anytime to enter REPL";
// let words = str.split(" ")

// let longestWord = ""
// for ( let word of words) {
//   if(word.length >  longestWord.length)
//       longestWord = word
// }

// console.log(longestWord)