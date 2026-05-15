# 153. Find Minimum in Rotated Sorted Array

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- **Topics**: Array, Binary Search
- **Acceptance**: 54.9%

## Problem Statement
<p>Suppose an array of length <code>n</code> sorted in ascending order is <strong>rotated</strong> between <code>1</code> and <code>n</code> times. For example, the array <code>nums = [0,1,2,4,5,6,7]</code> might become:</p>

<ul>
	<li><code>[4,5,6,7,0,1,2]</code> if it was rotated <code>4</code> times.</li>
	<li><code>[0,1,2,4,5,6,7]</code> if it was rotated <code>7</code> times.</li>
</ul>

<p>Notice that <strong>rotating</strong> an array <code>[a[0], a[1], a[2], ..., a[n-1]]</code> 1 time results in the array <code>[a[n-1], a[0], a[1], a[2], ..., a[n-2]]</code>.</p>

<p>Given the sorted rotated array <code>nums</code> of <strong>unique</strong> elements, return <em>the minimum element of this array</em>.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(log n) time</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,4,5,1,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The original array was [1,2,3,4,5] rotated 3 times.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [11,13,15,17]
<strong>Output:</strong> 11
<strong>Explanation:</strong> The original array was [11,13,15,17] and it was rotated 4 times. 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 5000</code></li>
	<li><code>-5000 &lt;= nums[i] &lt;= 5000</code></li>
	<li>All the integers of <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>nums</code> is sorted and rotated between <code>1</code> and <code>n</code> times.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `nums = [3,4,5,1,2]`
- **Output:** `1`
- **Explanation:** The original array was [1,2,3,4,5] rotated 3 times.

**Example 2:**
- **Input:** `nums = [4,5,6,7,0,1,2]`
- **Output:** `0`
- **Explanation:** The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.

**Example 3:**
- **Input:** `nums = [11,13,15,17]`
- **Output:** `11`
- **Explanation:** The original array was [11,13,15,17] and it was rotated 4 times.

## Constraints
- n == nums.length
- 1 <= n <= 5000
- -5000 <= nums[i] <= 5000
- All the integers of nums are unique.
- nums is sorted and rotated between 1 and n times.

## Hints
- Array was originally in ascending order. Now that the array is rotated, there would be a point in the array where there is a small deflection from the increasing sequence. eg. The array would be something like [4, 5, 6, 7, 0, 1, 2].
- You can divide the search space into two and see which direction to go.
Can you think of an algorithm which has O(logN) search complexity?
- <ol>
<li>All the elements to the left of inflection point > first element of the array.</li>
<li>All the elements to the right of inflection point < first element of the array.</li>
<ol>

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 14.1 MB | 2026-05-15 |

## Files
- [solution.cpp](solution.cpp)
