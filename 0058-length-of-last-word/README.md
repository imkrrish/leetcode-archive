# 58. Length of Last Word

## Metadata
- **Difficulty**: Easy
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/length-of-last-word/)
- **Topics**: String
- **Acceptance**: 59.1%

## Problem Statement
<p>Given a string <code>s</code> consisting of words and spaces, return <em>the length of the <strong>last</strong> word in the string.</em></p>

<p>A <strong>word</strong> is a maximal <span data-keyword="substring-nonempty">substring</span> consisting of non-space characters only.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;Hello World&quot;
<strong>Output:</strong> 5
<strong>Explanation:</strong> The last word is &quot;World&quot; with length 5.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;   fly me   to   the moon  &quot;
<strong>Output:</strong> 4
<strong>Explanation:</strong> The last word is &quot;moon&quot; with length 4.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;luffy is still joyboy&quot;
<strong>Output:</strong> 6
<strong>Explanation:</strong> The last word is &quot;joyboy&quot; with length 6.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of only English letters and spaces <code>&#39; &#39;</code>.</li>
	<li>There will be at least one word in <code>s</code>.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `s = "Hello World"`
- **Output:** `5`
- **Explanation:** The last word is "World" with length 5.

**Example 2:**
- **Input:** `s = "   fly me   to   the moon  "`
- **Output:** `4`
- **Explanation:** The last word is "moon" with length 4.

**Example 3:**
- **Input:** `s = "luffy is still joyboy"`
- **Output:** `6`
- **Explanation:** The last word is "joyboy" with length 6.

## Constraints
- 1 <= s.length <= 10^4
- s consists of only English letters and spaces ' '.
- There will be at least one word in s.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [JavaScript](solution.js) | 50 ms | 41.6 MB | 2023-10-16 |

## Files
- [solution.js](solution.js)
