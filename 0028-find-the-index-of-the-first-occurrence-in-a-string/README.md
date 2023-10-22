# 28. Find the Index of the First Occurrence in a String

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)
- **Topics**: Two Pointers, String, String Matching
- **Acceptance**: 46.9%

## Problem Statement
<p>Given two strings <code>needle</code> and <code>haystack</code>, return the index of the first occurrence of <code>needle</code> in <code>haystack</code>, or <code>-1</code> if <code>needle</code> is not part of <code>haystack</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> haystack = &quot;sadbutsad&quot;, needle = &quot;sad&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> &quot;sad&quot; occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> haystack = &quot;leetcode&quot;, needle = &quot;leeto&quot;
<strong>Output:</strong> -1
<strong>Explanation:</strong> &quot;leeto&quot; did not occur in &quot;leetcode&quot;, so we return -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= haystack.length, needle.length &lt;= 10<sup>4</sup></code></li>
	<li><code>haystack</code> and <code>needle</code> consist of only lowercase English characters.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `haystack = "sadbutsad", needle = "sad"`
- **Output:** `0`
- **Explanation:** "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

**Example 2:**
- **Input:** `haystack = "leetcode", needle = "leeto"`
- **Output:** `-1`
- **Explanation:** "leeto" did not occur in "leetcode", so we return -1.

## Constraints
- 1 <= haystack.length, needle.length <= 10^4
- haystack and needle consist of only lowercase English characters.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [JavaScript](solution.js) | 47 ms | 41.9 MB | 2023-10-22 |

## Files
- [solution.js](solution.js)
