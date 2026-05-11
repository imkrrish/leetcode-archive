# 2553. Separate the Digits in an Array

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/separate-the-digits-in-an-array/)
- **Topics**: Array, Simulation
- **Acceptance**: 85.8%

## Problem Statement
<p>Given an array of positive integers <code>nums</code>, return <em>an array </em><code>answer</code><em> that consists of the digits of each integer in </em><code>nums</code><em> after separating them in <strong>the same order</strong> they appear in </em><code>nums</code>.</p>

<p>To separate the digits of an integer is to get all the digits it has in the same order.</p>

<ul>
	<li>For example, for the integer <code>10921</code>, the separation of its digits is <code>[1,0,9,2,1]</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [13,25,83,77]
<strong>Output:</strong> [1,3,2,5,8,3,7,7]
<strong>Explanation:</strong> 
- The separation of 13 is [1,3].
- The separation of 25 is [2,5].
- The separation of 83 is [8,3].
- The separation of 77 is [7,7].
answer = [1,3,2,5,8,3,7,7]. Note that answer contains the separations in the same order.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [7,1,3,9]
<strong>Output:</strong> [7,1,3,9]
<strong>Explanation:</strong> The separation of each integer in nums is itself.
answer = [7,1,3,9].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `nums = [13,25,83,77]`
- **Output:** `[1,3,2,5,8,3,7,7]`
- **Explanation:** - The separation of 13 is [1,3].
- The separation of 25 is [2,5].
- The separation of 83 is [8,3].
- The separation of 77 is [7,7].
answer = [1,3,2,5,8,3,7,7]. Note that answer contains the separations in the same order.

**Example 2:**
- **Input:** `nums = [7,1,3,9]`
- **Output:** `[7,1,3,9]`
- **Explanation:** The separation of each integer in nums is itself.
answer = [7,1,3,9].

## Constraints
- 1 <= nums.length <= 1000
- 1 <= nums[i] <= 10^5

## Hints
- Convert each number into a list and append that list to the answer.
- You can convert the integer into a string to do that easily.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 14.2 MB | 2026-05-11 |

## Files
- [solution.cpp](solution.cpp)
