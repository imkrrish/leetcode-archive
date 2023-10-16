/**
 * @param {number} x
 * @return {boolean}
 */

var isPalindrome = function(x) {
    let str = x.toString();
    let len = str.length;
    for(let i = 0; i< len; i++){
        if(str[i] !== str[len-i-1])
            return false;
    }
    return true;
};

// var isPalindrome = function(x) {
//     var revNum = Number(x.toString().split("").reverse().join(""))
//     return revNum === x
// };