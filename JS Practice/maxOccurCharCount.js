function maxOccurCharCount(str) {
  str.split("");
  if (str) {
    var obj = {};
    let char;
    let max = 0;
    for (let i = 0; i < str.length; i++) {
      if (obj[str[i]]) {
        obj[str[i]] += 1;
      } else {
        obj[str[i]] = 1;
      }

      if (obj[str[i]] > max) {
        max = obj[str[i]];
        char = str[i];
      }
    }
    console.log(char);
  }
}

maxOccurCharCount("aabcfddddddd");
