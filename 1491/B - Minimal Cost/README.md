<h2><a href="https://codeforces.com/contest/1491/problem/B" target="_blank" rel="noopener noreferrer">1491B — Minimal Cost</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1491B](https://codeforces.com/contest/1491/problem/B) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Minimal Cost</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a graph of $$$n$$$ rows and $$$10^6 + 2$$$ columns, where rows are numbered from $$$1$$$ to $$$n$$$ and columns from $$$0$$$ to $$$10^6 + 1$$$:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/85a0ce2f95971b622b912410ca93d171f8ae1480.png" style="zoom: 30.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>Let's denote the node in the row $$$i$$$ and column $$$j$$$ by $$$(i, j)$$$.</p><p>Initially for each $$$i$$$ the $$$i$$$-th row has exactly one obstacle — at node $$$(i, a_i)$$$. You want to move some obstacles so that you can reach node $$$(n, 10^6+1)$$$ from node $$$(1, 0)$$$ by moving through edges of this graph (you can't pass through obstacles). Moving one obstacle to an adjacent by edge free node costs $$$u$$$ or $$$v$$$ coins, as below:</p><ul> <li> If there is an obstacle in the node $$$(i, j)$$$, you can use $$$u$$$ coins to move it to $$$(i-1, j)$$$ or $$$(i+1, j)$$$, if such node exists and if there is no obstacle in that node currently. </li><li> If there is an obstacle in the node $$$(i, j)$$$, you can use $$$v$$$ coins to move it to $$$(i, j-1)$$$ or $$$(i, j+1)$$$, if such node exists and if there is no obstacle in that node currently. </li><li> Note that you <span class="tex-font-style-bf">can't move obstacles outside the grid</span>. For example, you can't move an obstacle from $$$(1,1)$$$ to $$$(0,1)$$$. </li></ul><p>Refer to the picture above for a better understanding. </p><p>Now you need to calculate the minimal number of coins you need to spend to be able to reach node $$$(n, 10^6+1)$$$ from node $$$(1, 0)$$$ by moving through edges of this graph without passing through obstacles.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains three integers $$$n$$$, $$$u$$$ and $$$v$$$ ($$$2 \le n \le 100$$$, $$$1 \le u, v \le 10^9$$$) — the number of rows in the graph and the numbers of coins needed to move vertically and horizontally respectively.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^6$$$) — where $$$a_i$$$ represents that the obstacle in the $$$i$$$-th row is in node $$$(i, a_i)$$$.</p><p>It's guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^4$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimal number of coins you need to spend to be able to reach node $$$(n, 10^6+1)$$$ from node $$$(1, 0)$$$ by moving through edges of this graph without passing through obstacles.</p><p>It can be shown that under the constraints of the problem there is always a way to make such a trip possible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006515108179020417" id="id001247378148508429" class="input-output-copier">Copy</div></div><pre id="id006515108179020417">3
2 3 4
2 2
2 3 4
3 2
2 4 3
3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007243715821410299" id="id005162010352876626" class="input-output-copier">Copy</div></div><pre id="id007243715821410299">7
3
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, two obstacles are at $$$(1, 2)$$$ and $$$(2,2)$$$. You can move the obstacle on $$$(2, 2)$$$ to $$$(2, 3)$$$, then to $$$(1, 3)$$$. The total cost is $$$u+v = 7$$$ coins.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/310a26a2eae89672776febf07dac23d953ebb615.png" style="zoom: 30.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>In the second sample, two obstacles are at $$$(1, 3)$$$ and $$$(2,2)$$$. You can move the obstacle on $$$(1, 3)$$$ to $$$(2, 3)$$$. The cost is $$$u = 3$$$ coins.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/14098571b9970678331e7aacc7a4e7ffe5f175fe.png" style="zoom: 30.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>