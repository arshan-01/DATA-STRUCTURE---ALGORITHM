
var isValid = function(s) {
    let stack = [];
     for( let i = 0 ; i<s.length; i++){
         let ch = s[i];
         if (ch=="(" || ch=="{"|| ch=="["){
             stack.push(ch);
         }
         else{
             if(isEmpty(stack)){
                 return false;
             }
             const top = stack.pop();
  if (ch === ")" && top !== "(" || ch === "}" && top !== "{" || ch === "]" && top !== "[") {
        return false; // Comparison should be reversed to check for invalid pairs
      }  

              }
            }
     if (isEmpty(stack)) {
     return true;
   }
 
   return false
 };
 
 
 const isEmpty = ( stack ) => {
     return stack.length == 0 ;
 }

console.log(isValid("()"));
