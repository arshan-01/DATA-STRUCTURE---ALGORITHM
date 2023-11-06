const arr = [1, 2, [3, 4, 5], [6, 7, 8, 9]];
// console.log(arr);

// console.log(arr.flat())
// let flatArr = arr.reduce((acc, item) => acc.concat(item), []);

const flatten = (arr) => {
  flatArray = arr.reduce((acc, item) => {
    if (Array.isArray(item)) {
      acc = acc.concat(item);
    } else {
      acc.push(item);
    }
    return acc;
  }, []);
  return flatArray;
};

console.log(flatten(arr));
