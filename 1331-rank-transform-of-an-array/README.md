# 1331. Rank Transform of an Array

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/rank-transform-of-an-array/)
- **Topics**: Array, Hash Table, Sorting
- **Acceptance**: 73.9%

## Problem Statement
<p>Given an array of integers&nbsp;<code>arr</code>, replace each element with its rank.</p>

<p>The rank represents how large the element is. The rank has the following rules:</p>

<ul>
	<li>Rank is an integer starting from 1.</li>
	<li>The larger the element, the larger the rank. If two elements are equal, their rank must be the same.</li>
	<li>Rank should be as small as possible.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [40,10,20,30]
<strong>Output:</strong> [4,1,2,3]
<strong>Explanation</strong>: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [100,100,100]
<strong>Output:</strong> [1,1,1]
<strong>Explanation</strong>: Same elements share the same rank.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [37,12,28,9,100,56,80,5,12]
<strong>Output:</strong> [5,3,4,2,8,6,7,1,3]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `arr = [40,10,20,30]`
- **Output:** `[4,1,2,3]
Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.`

**Example 2:**
- **Input:** `arr = [100,100,100]`
- **Output:** `[1,1,1]
Explanation: Same elements share the same rank.`

**Example 3:**
- **Input:** `arr = [37,12,28,9,100,56,80,5,12]`
- **Output:** `[5,3,4,2,8,6,7,1,3]`

## Constraints
- 0 <= arr.length <= 10^5
- -10^9 <= arr[i] <= 10^9

## Hints
- Use a temporary array to copy the array and sort it.
- The rank of each element is the number of unique elements smaller than it in the sorted array plus one.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 34 ms | 44 MB | 2026-07-12 |

## Files
- [solution.cpp](solution.cpp)
