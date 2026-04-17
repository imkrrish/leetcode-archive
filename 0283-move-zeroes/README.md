# 283. Move Zeroes

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/move-zeroes/)
- **Topics**: Array, Two Pointers
- **Acceptance**: 64.0%

## Problem Statement
<p>Given an integer array <code>nums</code>, move all <code>0</code>&#39;s to the end of it while maintaining the relative order of the non-zero elements.</p>

<p><strong>Note</strong> that you must do this in-place without making a copy of the array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [0,1,0,3,12]
<strong>Output:</strong> [1,3,12,0,0]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> [0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you minimize the total number of operations done?

## Examples
**Example 1:**
- **Input:** `nums = [0,1,0,3,12]`
- **Output:** `[1,3,12,0,0]`

**Example 2:**
- **Input:** `nums = [0]`
- **Output:** `[0]`

## Constraints
- 1 <= nums.length <= 10^4
- -2^31 <= nums[i] <= 2^31 - 1

## Hints
- <b>In-place</b> means we should not be allocating any space for extra array. But we are allowed to modify the existing array. However, as a first step, try coming up with a solution that makes use of additional space. For this problem as well, first apply the idea discussed using an additional array and the in-place solution will pop up eventually.
- A <b>two-pointer</b> approach could be helpful here. The idea would be to have one pointer for iterating the array and another pointer that just works on the non-zero elements of the array.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 23.8 MB | 2026-04-17 |

## Files
- [solution.cpp](solution.cpp)
