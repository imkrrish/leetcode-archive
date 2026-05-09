# 1914. Cyclically Rotating a Grid

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/cyclically-rotating-a-grid/)
- **Topics**: Array, Matrix, Simulation
- **Acceptance**: 74.1%

## Problem Statement
<p>You are given an <code>m x n</code> integer matrix <code>grid</code>​​​, where <code>m</code> and <code>n</code> are both <strong>even</strong> integers, and an integer <code>k</code>.</p>

<p>The matrix is composed of several layers, which is shown in the below image, where each color is its own layer:</p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/06/10/ringofgrid.png" style="width: 231px; height: 258px;" /></p>

<p>A cyclic rotation of the matrix is done by cyclically rotating <strong>each layer</strong> in the matrix. To cyclically rotate a layer once, each element in the layer will take the place of the adjacent element in the <strong>counter-clockwise</strong> direction. An example rotation is shown below:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/22/explanation_grid.jpg" style="width: 500px; height: 268px;" />
<p>Return <em>the matrix after applying </em><code>k</code> <em>cyclic rotations to it</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/19/rod2.png" style="width: 421px; height: 191px;" />
<pre>
<strong>Input:</strong> grid = [[40,10],[30,20]], k = 1
<strong>Output:</strong> [[10,20],[40,30]]
<strong>Explanation:</strong> The figures above represent the grid at every state.
</pre>

<p><strong class="example">Example 2:</strong></p>
<strong><img alt="" src="https://assets.leetcode.com/uploads/2021/06/10/ringofgrid5.png" style="width: 231px; height: 262px;" /></strong> <strong><img alt="" src="https://assets.leetcode.com/uploads/2021/06/10/ringofgrid6.png" style="width: 231px; height: 262px;" /></strong> <strong><img alt="" src="https://assets.leetcode.com/uploads/2021/06/10/ringofgrid7.png" style="width: 231px; height: 262px;" /></strong>

<pre>
<strong>Input:</strong> grid = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], k = 2
<strong>Output:</strong> [[3,4,8,12],[2,11,10,16],[1,7,6,15],[5,9,13,14]]
<strong>Explanation:</strong> The figures above represent the grid at every state.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>2 &lt;= m, n &lt;= 50</code></li>
	<li>Both <code>m</code> and <code>n</code> are <strong>even</strong> integers.</li>
	<li><code>1 &lt;= grid[i][j] &lt;=<sup> </sup>5000</code></li>
	<li><code>1 &lt;= k &lt;= 10<sup>9</sup></code></li>
</ul>

## Examples
**Example 1:**
- **Input:** `grid = [[40,10],[30,20]], k = 1`
- **Output:** `[[10,20],[40,30]]`
- **Explanation:** The figures above represent the grid at every state.

**Example 2:**
- **Input:** `grid = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], k = 2`
- **Output:** `[[3,4,8,12],[2,11,10,16],[1,7,6,15],[5,9,13,14]]`
- **Explanation:** The figures above represent the grid at every state.

## Constraints
- m == grid.length
- n == grid[i].length
- 2 <= m, n <= 50
- Both m and n are even integers.
- 1 <= grid[i][j] <=^ 5000
- 1 <= k <= 10^9

## Hints
- First, you need to consider each layer separately as an array.
- Just cycle this array and then re-assign it.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 12 ms | 17.9 MB | 2026-05-09 |
| [C++](solution.cpp) | 14 ms | 17.7 MB | 2026-05-09 |

## Files
- [solution.cpp](solution.cpp)
- [solution.cpp](solution.cpp)
