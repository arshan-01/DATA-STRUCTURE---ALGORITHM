const arr = [1, 2, 3, 3, 2, 6, 2, 3, 3];
const count = new Array(7).fill(0);
let number;
var maxfreq = 0;
for (let i = 0; i < arr.length; i++) {
  count[arr[i]]++;
  if (count[arr[i]] > maxfreq) {
    maxfreq = count[arr[i]];
    number = arr[i];
  }
}

console.log(`${number} is ${maxfreq} times , maxfreq is ${maxfreq}`);
for (let index = 0; index < count.length; index++) {
  if (count[index] >= 1) {
    console.log(`${index} is ${count[index]} times`);
  }
}
