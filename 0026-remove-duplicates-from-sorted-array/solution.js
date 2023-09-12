/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
    let uniquePointer = 0;

    for (let i = 1; i < nums.length; i++) {

        if (nums[i] !== nums[uniquePointer]) {

            uniquePointer++;

            nums[uniquePointer] = nums[i];
        }
    }

    return uniquePointer + 1;
};