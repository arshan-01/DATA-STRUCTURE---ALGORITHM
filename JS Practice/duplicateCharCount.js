function duplicateCharCount(str) {
		str.split("");
	if(str) {
		var obj = {};
		for(let i = 0; i < str.length; i++) {
			obj[str[i]] = obj[str[i]] ? obj[str[i]] +=1:1;
		}
		console.log(obj);
	}
			
}

duplicateCharCount("aabcdd");