# 2784. Check if Array is Good

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/check-if-array-is-good/)
- **Topics**: Array, Hash Table, Sorting
- **Acceptance**: 57.3%

## Problem Statement
<p>You are given an integer array <code>nums</code>. We consider an array <strong>good </strong>if it is a permutation of an array <code>base[n]</code>.</p>

<p><code>base[n] = [1, 2, ..., n - 1, n, n] </code>(in other words, it is an array of length <code>n + 1</code> which contains <code>1</code> to <code>n - 1 </code>exactly once, plus two occurrences of <code>n</code>). For example, <code>base[1] = [1, 1]</code> and<code> base[3] = [1, 2, 3, 3]</code>.</p>

<p>Return <code>true</code> <em>if the given array is good, otherwise return</em><em> </em><code>false</code>.</p>

<p><strong>Note: </strong>A permutation of integers represents an arrangement of these numbers.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2, 1, 3]
<strong>Output:</strong> false
<strong>Explanation:</strong> Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. However, base[3] has four elements but array nums has three. Therefore, it can not be a permutation of base[3] = [1, 2, 3, 3]. So the answer is false.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1, 3, 3, 2]
<strong>Output:</strong> true
<strong>Explanation:</strong> Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. It can be seen that nums is a permutation of base[3] = [1, 2, 3, 3] (by swapping the second and fourth elements in nums, we reach base[3]). Therefore, the answer is true.</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1, 1]
<strong>Output:</strong> true
<strong>Explanation:</strong> Since the maximum element of the array is 1, the only candidate n for which this array could be a permutation of base[n], is n = 1. It can be seen that nums is a permutation of base[1] = [1, 1]. Therefore, the answer is true.</pre>

<p><strong class="example">Example 4:</strong></p>

<pre>
<strong>Input:</strong> nums = [3, 4, 4, 1, 2, 1]
<strong>Output:</strong> false
<strong>Explanation:</strong> Since the maximum element of the array is 4, the only candidate n for which this array could be a permutation of base[n], is n = 4. However, base[4] has five elements but array nums has six. Therefore, it can not be a permutation of base[4] = [1, 2, 3, 4, 4]. So the answer is false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= num[i] &lt;= 200</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `nums = [2, 1, 3]`
- **Output:** `false`
- **Explanation:** Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. However, base[3] has four elements but array nums has three. Therefore, it can not be a permutation of base[3] = [1, 2, 3, 3]. So the answer is false.

**Example 2:**
- **Input:** `nums = [1, 3, 3, 2]`
- **Output:** `true`
- **Explanation:** Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. It can be seen that nums is a permutation of base[3] = [1, 2, 3, 3] (by swapping the second and fourth elements in nums, we reach base[3]). Therefore, the answer is true.

**Example 3:**
- **Input:** `nums = [1, 1]`
- **Output:** `true`
- **Explanation:** Since the maximum element of the array is 1, the only candidate n for which this array could be a permutation of base[n], is n = 1. It can be seen that nums is a permutation of base[1] = [1, 1]. Therefore, the answer is true.

**Example 4:**
- **Input:** `nums = [3, 4, 4, 1, 2, 1]`
- **Output:** `false`
- **Explanation:** Since the maximum element of the array is 4, the only candidate n for which this array could be a permutation of base[n], is n = 4. However, base[4] has five elements but array nums has six. Therefore, it can not be a permutation of base[4] = [1, 2, 3, 4, 4]. So the answer is false.

## Constraints
- 1 <= nums.length <= 100
- 1 <= num[i] <= 200

## Hints
- Find the maximum element of the array.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 26.3 MB | 2026-05-14 |

## Files
- [solution.cpp](solution.cpp)
