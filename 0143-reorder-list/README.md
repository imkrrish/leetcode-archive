# 143. Reorder List

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/reorder-list/)
- **Topics**: Linked List, Two Pointers, Stack, Recursion
- **Acceptance**: 65.6%

## Problem Statement
<p>You are given the head of a singly linked-list. The list can be represented as:</p>

<pre>
L<sub>0</sub> &rarr; L<sub>1</sub> &rarr; &hellip; &rarr; L<sub>n - 1</sub> &rarr; L<sub>n</sub>
</pre>

<p><em>Reorder the list to be on the following form:</em></p>

<pre>
L<sub>0</sub> &rarr; L<sub>n</sub> &rarr; L<sub>1</sub> &rarr; L<sub>n - 1</sub> &rarr; L<sub>2</sub> &rarr; L<sub>n - 2</sub> &rarr; &hellip;
</pre>

<p>You may not modify the values in the list&#39;s nodes. Only nodes themselves may be changed.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/04/reorder1linked-list.jpg" style="width: 422px; height: 222px;" />
<pre>
<strong>Input:</strong> head = [1,2,3,4]
<strong>Output:</strong> [1,4,2,3]
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/09/reorder2-linked-list.jpg" style="width: 542px; height: 222px;" />
<pre>
<strong>Input:</strong> head = [1,2,3,4,5]
<strong>Output:</strong> [1,5,2,4,3]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[1, 5 * 10<sup>4</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 1000</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `head = [1,2,3,4]`
- **Output:** `[1,4,2,3]`

**Example 2:**
- **Input:** `head = [1,2,3,4,5]`
- **Output:** `[1,5,2,4,3]`

## Constraints
- The number of nodes in the list is in the range [1, 5 * 10^4].
- 1 <= Node.val <= 1000

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 22.7 MB | 2026-05-21 |

## Files
- [solution.cpp](solution.cpp)
