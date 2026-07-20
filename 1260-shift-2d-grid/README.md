# 1260. Shift 2D Grid

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/shift-2d-grid/)
- **Topics**: Array, Matrix, Simulation
- **Acceptance**: 74.5%

## Problem Statement
<p>Given a 2D <code>grid</code> of size <code>m x n</code>&nbsp;and an integer <code>k</code>. You need to shift the <code>grid</code>&nbsp;<code>k</code> times.</p>

<p>In one shift operation:</p>

<ul>
	<li>Element at <code>grid[i][j]</code> moves to <code>grid[i][j + 1]</code>.</li>
	<li>Element at <code>grid[i][n - 1]</code> moves to <code>grid[i + 1][0]</code>.</li>
	<li>Element at <code>grid[m&nbsp;- 1][n - 1]</code> moves to <code>grid[0][0]</code>.</li>
</ul>

<p>Return the <em>2D grid</em> after applying shift operation <code>k</code> times.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e1.png" style="width: 400px; height: 178px;" />
<pre>
<strong>Input:</strong> <code>grid</code> = [[1,2,3],[4,5,6],[7,8,9]], k = 1
<strong>Output:</strong> [[9,1,2],[3,4,5],[6,7,8]]
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e2.png" style="width: 400px; height: 166px;" />
<pre>
<strong>Input:</strong> <code>grid</code> = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
<strong>Output:</strong> [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> <code>grid</code> = [[1,2,3],[4,5,6],[7,8,9]], k = 9
<strong>Output:</strong> [[1,2,3],[4,5,6],[7,8,9]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m ==&nbsp;grid.length</code></li>
	<li><code>n ==&nbsp;grid[i].length</code></li>
	<li><code>1 &lt;= m &lt;= 50</code></li>
	<li><code>1 &lt;= n &lt;= 50</code></li>
	<li><code>-1000 &lt;= grid[i][j] &lt;= 1000</code></li>
	<li><code>0 &lt;= k &lt;= 100</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1`
- **Output:** `[[9,1,2],[3,4,5],[6,7,8]]`

**Example 2:**
- **Input:** `grid = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4`
- **Output:** `[[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]`

**Example 3:**
- **Input:** `grid = [[1,2,3],[4,5,6],[7,8,9]], k = 9`
- **Output:** `[[1,2,3],[4,5,6],[7,8,9]]`

## Constraints
- m == grid.length
- n == grid[i].length
- 1 <= m <= 50
- 1 <= n <= 50
- -1000 <= grid[i][j] <= 1000
- 0 <= k <= 100

## Hints
- Simulate step by step. move grid[i][j] to grid[i][j+1]. handle last column of the grid.
- Put the matrix row by row to a vector. take k % vector.length and move last k of the vector to the beginning. put the vector to the matrix back the same way.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 7 ms | 18.2 MB | 2026-07-20 |

## Files
- [solution.cpp](solution.cpp)
