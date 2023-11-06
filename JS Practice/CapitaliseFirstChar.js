let CapitaliseFirstChar = (str) => {
  let words = str.split(" ").map((word) => {
    let FirstChar = word.slice(0, 1).toUpperCase();
    let restWord = word.slice(1);
    let newWord = FirstChar + restWord;
    return newWord;
  });
  return words.join(" ");
}
let str = "hit control anytime to enter REPL";
console.log(CapitaliseFirstChar(str));