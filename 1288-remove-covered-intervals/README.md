# 1288. Remove Covered Intervals

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/remove-covered-intervals/)
- **Topics**: Array, Sorting
- **Acceptance**: 60.0%

## Problem Statement
<p>Given an array <code>intervals</code> where <code>intervals[i] = [l<sub>i</sub>, r<sub>i</sub>]</code> represent the interval <code>[l<sub>i</sub>, r<sub>i</sub>)</code>, remove all intervals that are covered by another interval in the list.</p>

<p>The interval <code>[a, b)</code> is covered by the interval <code>[c, d)</code> if and only if <code>c &lt;= a</code> and <code>b &lt;= d</code>.</p>

<p>Return <em>the number of remaining intervals</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[1,4],[3,6],[2,8]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> Interval [3,6] is covered by [2,8], therefore it is removed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[1,4],[2,3]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 1000</code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>0 &lt;= l<sub>i</sub> &lt; r<sub>i</sub> &lt;= 10<sup>5</sup></code></li>
	<li>All the given intervals are <strong>unique</strong>.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `intervals = [[1,4],[3,6],[2,8]]`
- **Output:** `2`
- **Explanation:** Interval [3,6] is covered by [2,8], therefore it is removed.

**Example 2:**
- **Input:** `intervals = [[1,4],[2,3]]`
- **Output:** `1`

## Constraints
- 1 <= intervals.length <= 1000
- intervals[i].length == 2
- 0 <= l_i < r_i <= 10^5
- All the given intervals are unique.

## Hints
- How to check if an interval is covered by another?
- Compare each interval to all others and check if it is covered by any interval.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 4 ms | 15 MB | 2026-07-06 |

## Files
- [solution.cpp](solution.cpp)
