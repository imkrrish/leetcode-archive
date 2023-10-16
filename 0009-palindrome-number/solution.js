/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    var revNum = Number(x.toString().split("").reverse().join(""))
    return revNum === x
};