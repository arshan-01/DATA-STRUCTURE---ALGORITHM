// Mat.round => rounds up when the decimal is .5.It rounds 1.5 to 2, 2.5 to 3, etc. It rounds -
// 1.5 to -1, -2.5 to -2, etc.

var myVariable = 0.1;
let output = Math.round(myVariable);
console.log("Math.round",output);

// To force JavaScript to round up to the nearest integer, no matter how small the fraction,
// use ceil
var myVari = 0.0000001;
let ceilOutput=Math.ceil(myVari);
console.log("Math.ceil",ceilOutput);

// To force JavaScript to round down to the nearest integer, no matter how large the fraction,
// use floor
var myVar = 0.99999;
let floorOutput=Math.floor(myVar);
console.log("Math.floor",floorOutput);