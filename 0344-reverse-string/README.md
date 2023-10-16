# 344. Reverse String

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/reverse-string/)
- **Topics**: Two Pointers, String
- **Acceptance**: 81.0%

## Problem Statement
<p>Write a function that reverses a string. The input string is given as an array of characters <code>s</code>.</p>

<p>You must do this by modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> with <code>O(1)</code> extra memory.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s = ["h","e","l","l","o"]
<strong>Output:</strong> ["o","l","l","e","h"]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> s = ["H","a","n","n","a","h"]
<strong>Output:</strong> ["h","a","n","n","a","H"]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s[i]</code> is a <a href="https://en.wikipedia.org/wiki/ASCII#Printable_characters" target="_blank">printable ascii character</a>.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `s = ["h","e","l","l","o"]`
- **Output:** `["o","l","l","e","h"]`

**Example 2:**
- **Input:** `s = ["H","a","n","n","a","h"]`
- **Output:** `["h","a","n","n","a","H"]`

## Constraints
- 1 <= s.length <= 10^5
- s[i] is a printable ascii character.

## Hints
- The entire logic for reversing a string is based on using the opposite directional two-pointer approach!

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [JavaScript](solution.js) | 83 ms | 48.8 MB | 2023-10-16 |

## Files
- [solution.js](solution.js)
