# 404. Sum of Left Leaves

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/sum-of-left-leaves/)
- **Topics**: Tree, Depth-First Search, Breadth-First Search, Binary Tree
- **Acceptance**: 62.9%

## Problem Statement
<p>Given the <code>root</code> of a binary tree, return <em>the sum of all left leaves.</em></p>

<p>A <strong>leaf</strong> is a node with no children. A <strong>left leaf</strong> is a leaf that is the left child of another node.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/08/leftsum-tree.jpg" style="width: 277px; height: 302px;" />
<pre>
<strong>Input:</strong> root = [3,9,20,null,null,15,7]
<strong>Output:</strong> 24
<strong>Explanation:</strong> There are two left leaves in the binary tree, with values 9 and 15 respectively.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 1000]</code>.</li>
	<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `root = [3,9,20,null,null,15,7]`
- **Output:** `24`
- **Explanation:** There are two left leaves in the binary tree, with values 9 and 15 respectively.

**Example 2:**
- **Input:** `root = [1]`
- **Output:** `0`

## Constraints
- The number of nodes in the tree is in the range [1, 1000].
- -1000 <= Node.val <= 1000

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 16.2 MB | 2026-04-20 |

## Files
- [solution.cpp](solution.cpp)
