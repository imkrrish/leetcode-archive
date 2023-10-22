/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
    let needleLenght = needle.length;

    for (var i = 0; i <= haystack.length - needleLenght; i++) {
        let str = haystack.slice(i, needleLenght + i);
        if (str === needle) {
            return i
        }
    }
    return -1
};