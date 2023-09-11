/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
    let uniquePointer = 0;

    // Iterate through the array starting from the second element (index 1)
    for (let i = 1; i < nums.length; i++) {
        // If the current element is different from the previous element
        if (nums[i] !== nums[uniquePointer]) {
            // Move the unique pointer to the next position
            uniquePointer++;
            // Update the unique element at the new position
            nums[uniquePointer] = nums[i];
        }
    }

    // The length of the unique elements is one more than the unique pointer position
    return uniquePointer + 1;
};