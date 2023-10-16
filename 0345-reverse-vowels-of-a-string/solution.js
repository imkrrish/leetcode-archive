/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function (s) {
    let strArr = s.split("")

    function isVowel(char) {
        return "aeiouAEIOU".includes(char)
    }

    let left = 0;
    let right = s.length - 1

    while (left < right) {
        while (left < right && !isVowel(strArr[left])) {
            left++
        }
        while (left < right && !isVowel(strArr[right])) {
            right--
        }

        [strArr[left], strArr[right]] = [strArr[right], strArr[left]]

        left++
        right--
    }

    return strArr.join("")
};