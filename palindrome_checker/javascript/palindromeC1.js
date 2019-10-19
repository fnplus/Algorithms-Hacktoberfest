// Prg to check if a string is palindrome in JS

// Using REGEX

function palindrome(str) {
    var re = /[\W_]/g;
    var lowRegStr = str.toLowerCase().replace(re, '');
    var reverseStr = lowRegStr.split('').reverse().join('');
    return reverseStr === lowRegStr;
}

console.log(palindrome("mom"));
console.log(palindrome("1010"));