# 1732. Find the Highest Altitude

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/find-the-highest-altitude/)
- **Topics**: Array, Prefix Sum
- **Acceptance**: 84.7%

## Problem Statement
<p>There is a biker going on a road trip. The road trip consists of <code>n + 1</code> points at various altitudes. The biker starts his trip on point <code>0</code> with altitude equal <code>0</code>.</p>

<p>You are given an integer array <code>gain</code> of length <code>n</code> where <code>gain[i]</code> is the <strong>net gain in altitude</strong> between points <code>i</code>​​​​​​ and <code>i + 1</code> for all (<code>0 &lt;= i &lt; n)</code>. Return <em>the <strong>highest altitude</strong> of a point.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> gain = [-5,1,5,0,-7]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> gain = [-4,-3,-2,-1,4,3,2]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == gain.length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>-100 &lt;= gain[i] &lt;= 100</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `gain = [-5,1,5,0,-7]`
- **Output:** `1`
- **Explanation:** The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

**Example 2:**
- **Input:** `gain = [-4,-3,-2,-1,4,3,2]`
- **Output:** `0`
- **Explanation:** The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.

## Constraints
- n == gain.length
- 1 <= n <= 100
- -100 <= gain[i] <= 100

## Hints
- Let's note that the altitude of an element is the sum of gains of all the elements behind it
- Getting the altitudes can be done by getting the prefix sum array of the given array

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 10.8 MB | 2026-06-19 |

## Files
- [solution.cpp](solution.cpp)
