# 876. Middle of the Linked List

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/middle-of-the-linked-list/)
- **Topics**: Linked List, Two Pointers
- **Acceptance**: 82.1%

## Problem Statement
<p>Given the <code>head</code> of a singly linked list, return <em>the middle node of the linked list</em>.</p>

<p>If there are two middle nodes, return <strong>the second middle</strong> node.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist1.jpg" style="width: 544px; height: 65px;" />
<pre>
<strong>Input:</strong> head = [1,2,3,4,5]
<strong>Output:</strong> [3,4,5]
<strong>Explanation:</strong> The middle node of the list is node 3.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist2.jpg" style="width: 664px; height: 65px;" />
<pre>
<strong>Input:</strong> head = [1,2,3,4,5,6]
<strong>Output:</strong> [4,5,6]
<strong>Explanation:</strong> Since the list has two middle nodes with values 3 and 4, we return the second one.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[1, 100]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
</ul>


## Examples
**Example 1:**
- **Input:** `head = [1,2,3,4,5]`
- **Output:** `[3,4,5]`
- **Explanation:** The middle node of the list is node 3.

**Example 2:**
- **Input:** `head = [1,2,3,4,5,6]`
- **Output:** `[4,5,6]`
- **Explanation:** Since the list has two middle nodes with values 3 and 4, we return the second one.

## Constraints
- The number of nodes in the list is in the range [1, 100].
- 1 <= Node.val <= 100

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 10.1 MB | 2026-04-18 |

## Files
- [solution.cpp](solution.cpp)
