<h2><a href="https://codeforces.com/contest/1735/problem/C" target="_blank" rel="noopener noreferrer">1735C — Phase Shift</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1735C](https://codeforces.com/contest/1735/problem/C) |

## Topics
`dfs and similar` `dsu` `graphs` `greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">C. Phase Shift</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There was a string $$$s$$$ which was supposed to be encrypted. For this reason, all $$$26$$$ lowercase English letters were arranged in a circle in some order, afterwards, each letter in $$$s$$$ was replaced with the one that follows in clockwise order, in that way the string $$$t$$$ was obtained. </p><p>You are given a string $$$t$$$. Determine the lexicographically smallest string $$$s$$$ that could be a prototype of the given string $$$t$$$.</p><p>A string $$$a$$$ is lexicographically smaller than a string $$$b$$$ of the same length if and only if: </p><ul> <li> in the first position where $$$a$$$ and $$$b$$$ differ, the string $$$a$$$ has a letter, that appears earlier in the alphabet than the corresponding letter in $$$b$$$. </li></ul> </div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 3 \cdot 10^4$$$) — the number of test cases. The description of test cases follows.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the length of the string $$$t$$$.</p><p>The next line contains the string $$$t$$$ of the length $$$n$$$, containing lowercase English letters.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single line containing the lexicographically smallest string $$$s$$$ which could be a prototype of $$$t$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007067348732282203" id="id009237289221102565" class="input-output-copier">Copy</div></div><pre data-content="5
1
a
2
ba
10
codeforces
26
abcdefghijklmnopqrstuvwxyz
26
abcdefghijklmnopqrstuvwxzy
" id="id007067348732282203"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">a</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">ba</div><div class="test-example-line test-example-line-odd test-example-line-3">10</div><div class="test-example-line test-example-line-odd test-example-line-3">codeforces</div><div class="test-example-line test-example-line-even test-example-line-4">26</div><div class="test-example-line test-example-line-even test-example-line-4">abcdefghijklmnopqrstuvwxyz</div><div class="test-example-line test-example-line-odd test-example-line-5">26</div><div class="test-example-line test-example-line-odd test-example-line-5">abcdefghijklmnopqrstuvwxzy</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0056745583073627" id="id004807333672760915" class="input-output-copier">Copy</div></div><pre id="id0056745583073627">b
ac
abcdebfadg
bcdefghijklmnopqrstuvwxyza
bcdefghijklmnopqrstuvwxyaz
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we couldn't have the string "<span class="tex-font-style-tt">a</span>", since the letter <span class="tex-font-style-tt">a</span> would transit to itself. Lexicographically the second string "<span class="tex-font-style-tt">b</span>" is suitable as an answer.</p><p>In the second test case, the string "<span class="tex-font-style-tt">aa</span>" is not suitable, since <span class="tex-font-style-tt">a</span> would transit to itself. "<span class="tex-font-style-tt">ab</span>" is not suitable, since the circle would be closed with $$$2$$$ letters, but it must contain all $$$26$$$. The next string "<span class="tex-font-style-tt">ac</span>" is suitable.</p><p>Below you can see the schemes for the first three test cases. The non-involved letters are skipped, they can be arbitrary placed in the gaps.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/703a6d4597b66d41db894d2cfc0e317b22cf40c3.png" style="max-width: 100.0%;max-height: 100.0%;" width="832px"> </center></div>