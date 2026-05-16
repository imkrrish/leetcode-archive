# 3. Longest Substring Without Repeating Characters

## Metadata
- **Difficulty**: Medium
- **URL**: [LeetCode Problem URL](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- **Topics**: Hash Table, String, Sliding Window
- **Acceptance**: 39.4%

## Problem Statement
<p>Given a string <code>s</code>, find the length of the <strong>longest</strong> <span data-keyword="substring-nonempty"><strong>substring</strong></span> without duplicate characters.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcabcbb&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The answer is &quot;abc&quot;, with the length of 3. Note that <code>&quot;bca&quot;</code> and <code>&quot;cab&quot;</code> are also correct answers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;bbbbb&quot;
<strong>Output:</strong> 1
<strong>Explanation:</strong> The answer is &quot;b&quot;, with the length of 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;pwwkew&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The answer is &quot;wke&quot;, with the length of 3.
Notice that the answer must be a substring, &quot;pwke&quot; is a subsequence and not a substring.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>s</code> consists of English letters, digits, symbols and spaces.</li>
</ul>


## Examples
**Example 1:**
- **Input:** `s = "abcabcbb"`
- **Output:** `3`
- **Explanation:** The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

**Example 2:**
- **Input:** `s = "bbbbb"`
- **Output:** `1`
- **Explanation:** The answer is "b", with the length of 1.

**Example 3:**
- **Input:** `s = "pwwkew"`
- **Output:** `3`
- **Explanation:** The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

## Constraints
- 0 <= s.length <= 5 * 10^4
- s consists of English letters, digits, symbols and spaces.

## Hints
- There are less than 100 unique characters. We can check all substrings with length at most 100 for example. This is a good enough approximation.

## Accepted Solutions

| Language | Runtime | Memory | Submitted |
| -------- | ------- | ------ | --------- |
| [C++](solution.cpp) | 6 ms | 11.6 MB | 2026-05-16 |
| [C++](solution.cpp) | 14 ms | 14.2 MB | 2026-05-16 |

## Files
- [solution.cpp](solution.cpp)
- [solution.cpp](solution.cpp)
