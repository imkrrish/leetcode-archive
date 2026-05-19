# 2540. Minimum Common Value

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/minimum-common-value/)
- **Topics**: Array, Hash Table, Two Pointers, Binary Search
- **Acceptance**: 60.8%

## Problem Statement
<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, sorted in non-decreasing order, return <em>the <strong>minimum integer common</strong> to both arrays</em>. If there is no common integer amongst <code>nums1</code> and <code>nums2</code>, return <code>-1</code>.</p>

<p>Note that an integer is said to be <strong>common</strong> to <code>nums1</code> and <code>nums2</code> if both arrays have <strong>at least one</strong> occurrence of that integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [1,2,3], nums2 = [2,4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The smallest element common to both arrays is 2, so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [1,2,3,6], nums2 = [2,3,4,5]
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums1.length, nums2.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums1[i], nums2[j] &lt;= 10<sup>9</sup></code></li>
	<li>Both <code>nums1</code> and <code>nums2</code> are sorted in <strong>non-decreasing</strong> order.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `nums1 = [1,2,3], nums2 = [2,4]`
- **Output:** `2`
- **Explanation:** The smallest element common to both arrays is 2, so we return 2.

**Example 2:**
- **Input:** `nums1 = [1,2,3,6], nums2 = [2,3,4,5]`
- **Output:** `2`
- **Explanation:** There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.

## Constraints
- 1 <= nums1.length, nums2.length <= 10^5
- 1 <= nums1[i], nums2[j] <= 10^9
- Both nums1 and nums2 are sorted in non-decreasing order.

## Hints
- Try to use a set.
- Otherwise, try to use a two-pointer approach.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 54.6 MB | 2026-05-19 |

## Files
- [solution.cpp](solution.cpp)
