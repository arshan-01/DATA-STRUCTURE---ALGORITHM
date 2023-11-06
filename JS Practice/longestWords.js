const str = "hit control anytime to enter REPL";
let words = str.split(" ")
let size = 0;
let longestWord = ['']
for ( let word of words) {
    if (word.length>=size) {
        size = word.length;
        if(word.length > longestWord[longestWord.length-1].length)
        {
            longestWord=[];
            longestWord.push(word);
        } 
        else {
            longestWord = [...longestWord,word]
          }
    }
  
  
}
    
console.log(longestWord)



// const str = "hit control anytime to enter REPL";
// const words = str.split(" ");
// let maxLength = 0;
// let longestWords = [];

// for (let word of words) {
//   if (word.length > maxLength) {
//     maxLength = word.length;
//     longestWords = [word];
//   } 
// }

// console.log(longestWords);
