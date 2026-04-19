# 104. Maximum Depth of Binary Tree

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- **Topics**: Tree, Depth-First Search, Breadth-First Search, Binary Tree
- **Acceptance**: 78.3%

## Problem Statement
<p>Given the <code>root</code> of a binary tree, return <em>its maximum depth</em>.</p>

<p>A binary tree&#39;s <strong>maximum depth</strong>&nbsp;is the number of nodes along the longest path from the root node down to the farthest leaf node.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/tmp-tree.jpg" style="width: 400px; height: 277px;" />
<pre>
<strong>Input:</strong> root = [3,9,20,null,null,15,7]
<strong>Output:</strong> 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [1,null,2]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `root = [3,9,20,null,null,15,7]`
- **Output:** `3`

**Example 2:**
- **Input:** `root = [1,null,2]`
- **Output:** `2`

## Constraints
- The number of nodes in the tree is in the range [0, 10^4].
- -100 <= Node.val <= 100

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 18.9 MB | 2026-04-19 |

## Files
- [solution.cpp](solution.cpp)
