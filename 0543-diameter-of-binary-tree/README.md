# 543. Diameter of Binary Tree

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/diameter-of-binary-tree/)
- **Topics**: Tree, Depth-First Search, Binary Tree
- **Acceptance**: 65.8%

## Problem Statement
<p>Given the <code>root</code> of a binary tree, return <em>the length of the <strong>diameter</strong> of the tree</em>.</p>

<p>The <strong>diameter</strong> of a binary tree is the <strong>length</strong> of the longest path between any two nodes in a tree. This path may or may not pass through the <code>root</code>.</p>

<p>The <strong>length</strong> of a path between two nodes is represented by the number of edges between them.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/06/diamtree.jpg" style="width: 292px; height: 302px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,4,5]
<strong>Output:</strong> 3
<strong>Explanation:</strong> 3 is the length of the path [4,2,1,3] or [5,2,1,3].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [1,2]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `root = [1,2,3,4,5]`
- **Output:** `3`
- **Explanation:** 3 is the length of the path [4,2,1,3] or [5,2,1,3].

**Example 2:**
- **Input:** `root = [1,2]`
- **Output:** `1`

## Constraints
- The number of nodes in the tree is in the range [1, 10^4].
- -100 <= Node.val <= 100

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 3 ms | 23.8 MB | 2026-04-20 |

## Files
- [solution.cpp](solution.cpp)
