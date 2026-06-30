# 1358. Number of Substrings Containing All Three Characters

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/)
- **Topics**: Hash Table, String, Sliding Window
- **Acceptance**: 74.4%

## Problem Statement
<p>Given a string <code>s</code>&nbsp;consisting only of characters <em>a</em>, <em>b</em> and <em>c</em>.</p>

<p>Return the number of substrings containing <b>at least</b>&nbsp;one occurrence of all these characters <em>a</em>, <em>b</em> and <em>c</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcabc&quot;
<strong>Output:</strong> 10
<strong>Explanation:</strong> The substrings containing&nbsp;at least&nbsp;one occurrence of the characters&nbsp;<em>a</em>,&nbsp;<em>b</em>&nbsp;and&nbsp;<em>c are &quot;</em>abc<em>&quot;, &quot;</em>abca<em>&quot;, &quot;</em>abcab<em>&quot;, &quot;</em>abcabc<em>&quot;, &quot;</em>bca<em>&quot;, &quot;</em>bcab<em>&quot;, &quot;</em>bcabc<em>&quot;, &quot;</em>cab<em>&quot;, &quot;</em>cabc<em>&quot; </em>and<em> &quot;</em>abc<em>&quot; </em>(<strong>again</strong>)<em>. </em>
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aaacb&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The substrings containing&nbsp;at least&nbsp;one occurrence of the characters&nbsp;<em>a</em>,&nbsp;<em>b</em>&nbsp;and&nbsp;<em>c are &quot;</em>aaacb<em>&quot;, &quot;</em>aacb<em>&quot; </em>and<em> &quot;</em>acb<em>&quot;.</em><em> </em>
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abc&quot;
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= s.length &lt;= 5 x 10^4</code></li>
	<li><code>s</code>&nbsp;only consists of&nbsp;<em>a</em>, <em>b</em> or <em>c&nbsp;</em>characters.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `s = "abcabc"`
- **Output:** `10`
- **Explanation:** The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again).

**Example 2:**
- **Input:** `s = "aaacb"`
- **Output:** `3`
- **Explanation:** The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb".

**Example 3:**
- **Input:** `s = "abc"`
- **Output:** `1`

## Constraints
- 3 <= s.length <= 5 x 10^4
- s only consists of a, b or c characters.

## Hints
- For each position we simply need to find the first occurrence of a/b/c on or after this position.
- So we can pre-compute three link-list of indices of each a, b, and c.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 3 ms | 11.1 MB | 2026-06-30 |

## Files
- [solution.cpp](solution.cpp)
