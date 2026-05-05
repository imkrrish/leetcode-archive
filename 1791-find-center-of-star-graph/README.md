# 1791. Find Center of Star Graph

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/find-center-of-star-graph/)
- **Topics**: Graph Theory
- **Acceptance**: 86.6%

## Problem Statement
<p>There is an undirected <strong>star</strong> graph consisting of <code>n</code> nodes labeled from <code>1</code> to <code>n</code>. A star graph is a graph where there is one <strong>center</strong> node and <strong>exactly</strong> <code>n - 1</code> edges that connect the center node with every other node.</p>

<p>You are given a 2D integer array <code>edges</code> where each <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> indicates that there is an edge between the nodes <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>. Return the center of the given star graph.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/24/star_graph.png" style="width: 331px; height: 321px;" />
<pre>
<strong>Input:</strong> edges = [[1,2],[2,3],[4,2]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> As shown in the figure above, node 2 is connected to every other node, so 2 is the center.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> edges = [[1,2],[5,1],[1,3],[1,4]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>edges.length == n - 1</code></li>
	<li><code>edges[i].length == 2</code></li>
	<li><code>1 &lt;= u<sub>i,</sub> v<sub>i</sub> &lt;= n</code></li>
	<li><code>u<sub>i</sub> != v<sub>i</sub></code></li>
	<li>The given <code>edges</code> represent a valid star graph.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `edges = [[1,2],[2,3],[4,2]]`
- **Output:** `2`
- **Explanation:** As shown in the figure above, node 2 is connected to every other node, so 2 is the center.

**Example 2:**
- **Input:** `edges = [[1,2],[5,1],[1,3],[1,4]]`
- **Output:** `1`

## Constraints
- 3 <= n <= 10^5
- edges.length == n - 1
- edges[i].length == 2
- 1 <= u_i, v_i <= n
- u_i != v_i
- The given edges represent a valid star graph.

## Hints
- The center is the only node that has more than one edge.
- The center is also connected to all other nodes.
- Any two edges must have a common node, which is the center.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 0 ms | 99.3 MB | 2026-05-05 |

## Files
- [solution.cpp](solution.cpp)
