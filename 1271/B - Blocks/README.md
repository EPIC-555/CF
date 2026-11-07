<h2><a href="https://codeforces.com/contest/1271/problem/B" target="_blank" rel="noopener noreferrer">1271B — Blocks</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1271B](https://codeforces.com/contest/1271/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Blocks</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ blocks arranged in a row and numbered from left to right, starting from one. Each block is either black or white. </p><p>You may perform the following operation zero or more times: choose two <span class="tex-font-style-bf">adjacent</span> blocks and invert their colors (white block becomes black, and vice versa). </p><p>You want to find a sequence of operations, such that they make all the blocks having the same color. You <span class="tex-font-style-bf">don't have</span> to minimize the number of operations, but it should not exceed $$$3 \cdot n$$$. If it is impossible to find such a sequence of operations, you need to report it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$2 \le n \le 200$$$) — the number of blocks.</p><p>The second line contains one string $$$s$$$ consisting of $$$n$$$ characters, each character is either "<span class="tex-font-style-tt">W</span>" or "<span class="tex-font-style-tt">B</span>". If the $$$i$$$-th character is "<span class="tex-font-style-tt">W</span>", then the $$$i$$$-th block is white. If the $$$i$$$-th character is "<span class="tex-font-style-tt">B</span>", then the $$$i$$$-th block is black. </p></div><div class="output-specification"><div class="section-title">Output</div><p>If it is impossible to make all the blocks having the same color, print $$$-1$$$.</p><p>Otherwise, print an integer $$$k$$$ ($$$0 \le k \le 3 \cdot n$$$) — the number of operations. Then print $$$k$$$ integers $$$p_1, p_2, \dots, p_k$$$ $$$(1 \le p_j \le n - 1)$$$, where $$$p_j$$$ is the position of the left block in the pair of blocks that should be affected by the $$$j$$$-th operation.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004159888400868762" id="id009043766179260926" class="input-output-copier">Copy</div></div><pre id="id004159888400868762">8
BWWWWWWB
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00467489962591189" id="id00825747819275681" class="input-output-copier">Copy</div></div><pre id="id00467489962591189">3
6 2 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003906390777801516" id="id00582901002555311" class="input-output-copier">Copy</div></div><pre id="id003906390777801516">4
BWBB
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001114121723594278" id="id0009513730878611815" class="input-output-copier">Copy</div></div><pre id="id001114121723594278">-1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0033331416150331405" id="id00012433617291786159" class="input-output-copier">Copy</div></div><pre id="id0033331416150331405">5
WWWWW
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027106850153734097" id="id007017629819765102" class="input-output-copier">Copy</div></div><pre id="id0027106850153734097">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007311439776886784" id="id0021940257383874517" class="input-output-copier">Copy</div></div><pre id="id007311439776886784">3
BWB
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00012599055576292595" id="id009729289924740607" class="input-output-copier">Copy</div></div><pre id="id00012599055576292595">2
2 1 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, it is possible to make all blocks black in $$$3$$$ operations. Start with changing blocks $$$6$$$ and $$$7$$$, so the sequence is "<span class="tex-font-style-tt">BWWWWBBB</span>". Then change blocks $$$2$$$ and $$$3$$$, so the sequence is "<span class="tex-font-style-tt">BBBWWBB</span>". And finally, change blocks $$$4$$$ and $$$5$$$, so all blocks are black.</p><p>It is impossible to make all colors equal in the second example.</p><p>All blocks are already white in the third example.</p><p>In the fourth example it is possible to make all blocks white in two operations: first operation is to change blocks $$$2$$$ and $$$3$$$ (so the sequence is "<span class="tex-font-style-tt">BBW</span>"), and then change blocks $$$1$$$ and $$$2$$$ (so all blocks are white).</p></div>