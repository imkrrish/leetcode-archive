# 1301. Number of Paths with Max Score

## Metadata
- **Difficulty**: Hard
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/number-of-paths-with-max-score/)
- **Topics**: Array, Dynamic Programming, Matrix
- **Acceptance**: 64.5%

## Problem Statement
<p>You are given a square <code>board</code>&nbsp;of characters. You can move on the board starting at the bottom right square marked with the character&nbsp;<code>&#39;S&#39;</code>.</p>

<p>You need&nbsp;to reach the top left square marked with the character <code>&#39;E&#39;</code>. The rest of the squares are labeled either with a numeric character&nbsp;<code>1, 2, ..., 9</code> or with an obstacle <code>&#39;X&#39;</code>. In one move you can go up, left or up-left (diagonally) only if there is no obstacle there.</p>

<p>Return a list of two integers: the first integer is the maximum sum of numeric characters you can collect, and the second is the number of such paths that you can take to get that maximum sum, <strong>taken modulo <code>10^9 + 7</code></strong>.</p>

<p>In case there is no path, return&nbsp;<code>[0, 0]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> board = ["E23","2X2","12S"]
<strong>Output:</strong> [7,1]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> board = ["E12","1X1","21S"]
<strong>Output:</strong> [4,2]
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> board = ["E11","XXX","11S"]
<strong>Output:</strong> [0,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= board.length == board[i].length &lt;= 100</code></li>
</ul>

## Examples
**Example 1:**
- **Input:** `board = ["E23","2X2","12S"]`
- **Output:** `[7,1]`

**Example 2:**
- **Input:** `board = ["E12","1X1","21S"]`
- **Output:** `[4,2]`

**Example 3:**
- **Input:** `board = ["E11","XXX","11S"]`
- **Output:** `[0,0]`

## Constraints
- 2 <= board.length == board[i].length <= 100

## Hints
- Use dynamic programming to find the path with the max score.
- Use another dynamic programming array to count the number of paths with max score.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 9 ms | 11.7 MB | 2026-07-05 |

## Files
- [solution.cpp](solution.cpp)
