/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
    let symbolTable = {
        "I": 1,
        "IV": 4,
        "V": 5,
        "IX": 9,
        "X": 10,
        "XL": 40,
        "L": 50,
        "XC": 90,
        "C": 100,
        "CD": 400,
        "D": 500,
        "CM": 900,
        "M": 1000
    }

    let total = 0;

    for (var i = 0; i < s.length; i++) {
        let twoVal = s.slice(i, i + 2);
        if (symbolTable[twoVal]) {
            total += symbolTable[twoVal];
            i++;
        }
        else {
            total += symbolTable[s[i]]
        }
    }
    return total;
};