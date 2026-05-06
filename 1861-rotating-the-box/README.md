# 1861. Rotating the Box

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/rotating-the-box/)
- **Topics**: Array, Two Pointers, Matrix
- **Acceptance**: 82.5%

## Problem Statement
<p>You are given an <code>m x n</code> matrix of characters <code>boxGrid</code> representing a side-view of a box. Each cell of the box is one of the following:</p>

<ul>
	<li>A stone <code>&#39;#&#39;</code></li>
	<li>A stationary obstacle <code>&#39;*&#39;</code></li>
	<li>Empty <code>&#39;.&#39;</code></li>
</ul>

<p>The box is rotated <strong>90 degrees clockwise</strong>, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravity <strong>does not</strong> affect the obstacles&#39; positions, and the inertia from the box&#39;s rotation <strong>does not </strong>affect the stones&#39; horizontal positions.</p>

<p>It is <strong>guaranteed</strong> that each stone in <code>boxGrid</code> rests on an obstacle, another stone, or the bottom of the box.</p>

<p>Return <em>an </em><code>n x m</code><em> matrix representing the box after the rotation described above</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/rotatingtheboxleetcodewithstones.png" style="width: 300px; height: 150px;" /></p>

<pre>
<strong>Input:</strong> boxGrid = [[&quot;#&quot;,&quot;.&quot;,&quot;#&quot;]]
<strong>Output:</strong> [[&quot;.&quot;],
&nbsp;        [&quot;#&quot;],
&nbsp;        [&quot;#&quot;]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/rotatingtheboxleetcode2withstones.png" style="width: 375px; height: 195px;" /></p>

<pre>
<strong>Input:</strong> boxGrid = [[&quot;#&quot;,&quot;.&quot;,&quot;*&quot;,&quot;.&quot;],
&nbsp;             [&quot;#&quot;,&quot;#&quot;,&quot;*&quot;,&quot;.&quot;]]
<strong>Output:</strong> [[&quot;#&quot;,&quot;.&quot;],
&nbsp;        [&quot;#&quot;,&quot;#&quot;],
&nbsp;        [&quot;*&quot;,&quot;*&quot;],
&nbsp;        [&quot;.&quot;,&quot;.&quot;]]
</pre>

<p><strong class="example">Example 3:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/rotatingtheboxleetcode3withstone.png" style="width: 400px; height: 218px;" /></p>

<pre>
<strong>Input:</strong> boxGrid = [[&quot;#&quot;,&quot;#&quot;,&quot;*&quot;,&quot;.&quot;,&quot;*&quot;,&quot;.&quot;],
&nbsp;             [&quot;#&quot;,&quot;#&quot;,&quot;#&quot;,&quot;*&quot;,&quot;.&quot;,&quot;.&quot;],
&nbsp;             [&quot;#&quot;,&quot;#&quot;,&quot;#&quot;,&quot;.&quot;,&quot;#&quot;,&quot;.&quot;]]
<strong>Output:</strong> [[&quot;.&quot;,&quot;#&quot;,&quot;#&quot;],
&nbsp;        [&quot;.&quot;,&quot;#&quot;,&quot;#&quot;],
&nbsp;        [&quot;#&quot;,&quot;#&quot;,&quot;*&quot;],
&nbsp;        [&quot;#&quot;,&quot;*&quot;,&quot;.&quot;],
&nbsp;        [&quot;#&quot;,&quot;.&quot;,&quot;*&quot;],
&nbsp;        [&quot;#&quot;,&quot;.&quot;,&quot;.&quot;]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == boxGrid.length</code></li>
	<li><code>n == boxGrid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 500</code></li>
	<li><code>boxGrid[i][j]</code> is either <code>&#39;#&#39;</code>, <code>&#39;*&#39;</code>, or <code>&#39;.&#39;</code>.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `boxGrid = [["#",".","#"]]`
- **Output:** `[["."],
         ["#"],
         ["#"]]`

**Example 2:**
- **Input:** `boxGrid = [["#",".","*","."],
              ["#","#","*","."]]`
- **Output:** `[["#","."],
         ["#","#"],
         ["*","*"],
         [".","."]]`

**Example 3:**
- **Input:** `boxGrid = [["#","#","*",".","*","."],
              ["#","#","#","*",".","."],
              ["#","#","#",".","#","."]]`
- **Output:** `[[".","#","#"],
         [".","#","#"],
         ["#","#","*"],
         ["#","*","."],
         ["#",".","*"],
         ["#",".","."]]`

## Constraints
- m == boxGrid.length
- n == boxGrid[i].length
- 1 <= m, n <= 500
- boxGrid[i][j] is either '#', '*', or '.'.

## Hints
- Rotate the box using the relation rotatedBox[i][j] = box[m - 1 - j][i].
- Start iterating from the bottom of the box and for each empty cell check if there is any stone above it with no obstacles between them.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 11 ms | 56.9 MB | 2026-05-06 |

## Files
- [solution.cpp](solution.cpp)
