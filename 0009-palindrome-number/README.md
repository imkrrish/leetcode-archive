# 9. Palindrome Number

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/palindrome-number/)
- **Topics**: Math
- **Acceptance**: 60.7%

## Problem Statement
<p>Given an integer <code>x</code>, return <code>true</code><em> if </em><code>x</code><em> is a </em><span data-keyword="palindrome-integer"><em><strong>palindrome</strong></em></span><em>, and </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> x = 121
<strong>Output:</strong> true
<strong>Explanation:</strong> 121 reads as 121 from left to right and from right to left.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> x = -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> x = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup>&nbsp;&lt;= x &lt;= 2<sup>31</sup>&nbsp;- 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without converting the integer to a string?

## Examples
**Example 1:**
- **Input:** `x = 121`
- **Output:** `true`
- **Explanation:** 121 reads as 121 from left to right and from right to left.

**Example 2:**
- **Input:** `x = -121`
- **Output:** `false`
- **Explanation:** From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

**Example 3:**
- **Input:** `x = 10`
- **Output:** `false`
- **Explanation:** Reads 01 from right to left. Therefore it is not a palindrome.

## Constraints
- -2^31 <= x <= 2^31 - 1

## Hints
- Beware of overflow when you reverse the integer.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [JavaScript](solution.js) | 137 ms | 51.2 MB | 2023-10-16 |
| [JavaScript](solution.js) | 145 ms | 51.5 MB | 2023-10-16 |

## Files
- [solution.js](solution.js)
- [solution.js](solution.js)
