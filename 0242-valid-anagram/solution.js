/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
    const map1 = {}
    if (s.length != t.length) return false
    for (let i = 0; i < s.length; i++) {
        const char = s[i]
        if (!map1[char]) map1[char] = 0
        map1[char] = map1[char] + 1
    }
    for (let i = 0; i < t.length; i++) {
        const char = t[i]
        if (map1[char] <= 0 || !map1[char]) {
            return false
        } else {
            map1[char] = map1[char] - 1
        }
    }
    return true

};