/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let lookUP = {}

    for (let i = 0; i < nums.length; i++) {
        if (lookUP[target - nums[i]] == undefined) {
            lookUP[nums[i]] = i;
        }
        else {
            return [lookUP[target - nums[i]], i]
        }
    }
};

// /**
//  * @param {number[]} nums
//  * @param {number} target
//  * @return {number[]}
//  */
// var twoSum = function (nums, target) {
//     for (let i = 0; i < nums.length; i++) {
//         for (let j = i + 1; j < nums.length; j++) {
//             if (nums[i] + nums[j] == target) {
//                 return [i, j]
//             }
//         }
//     }
// };