# 33. Search in Rotated Sorted Array

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- **Topics**: Array, Binary Search
- **Acceptance**: 45.2%

## Problem Statement
<p>There is an integer array <code>nums</code> sorted in ascending order (with <strong>distinct</strong> values).</p>

<p>Prior to being passed to your function, <code>nums</code> is <strong>possibly left rotated</strong> at an unknown index <code>k</code> (<code>1 &lt;= k &lt; nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code>[0,1,2,4,5,6,7]</code> might be left rotated by&nbsp;<code>3</code>&nbsp;indices and become <code>[4,5,6,7,0,1,2]</code>.</p>

<p>Given the array <code>nums</code> <strong>after</strong> the possible rotation and an integer <code>target</code>, return <em>the index of </em><code>target</code><em> if it is in </em><code>nums</code><em>, or </em><code>-1</code><em> if it is not in </em><code>nums</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li>All values of <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>nums</code> is an ascending array that is possibly rotated.</li>
	<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `nums = [4,5,6,7,0,1,2], target = 0`
- **Output:** `4`

**Example 2:**
- **Input:** `nums = [4,5,6,7,0,1,2], target = 3`
- **Output:** `-1`

**Example 3:**
- **Input:** `nums = [1], target = 0`
- **Output:** `-1`

## Constraints
- 1 <= nums.length <= 5000
- -10^4 <= nums[i] <= 10^4
- All values of nums are unique.
- nums is an ascending array that is possibly rotated.
- -10^4 <= target <= 10^4

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 15.3 MB | 2026-05-19 |

## Files
- [solution.cpp](solution.cpp)
