<h2><a href="https://codeforces.com/contest/1530/problem/C" target="_blank" rel="noopener noreferrer">1530C — Pursuit</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1530C](https://codeforces.com/contest/1530/problem/C) |

## Topics
`binary search` `brute force` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Pursuit</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You and your friend Ilya are participating in an individual programming contest consisting of multiple stages. A contestant can get between $$$0$$$ and $$$100$$$ points, inclusive, for each stage, independently of other contestants.</p><p>Points received by contestants in different stages are used for forming overall contest results. Suppose that $$$k$$$ stages of the contest are completed. For each contestant, $$$k - \lfloor \frac{k}{4} \rfloor$$$ stages with the highest scores are selected, and these scores are added up. This sum is the overall result of the contestant. (Here $$$\lfloor t \rfloor$$$ denotes rounding $$$t$$$ down.)</p><p>For example, suppose $$$9$$$ stages are completed, and your scores are $$$50, 30, 50, 50, 100, 10, 30, 100, 50$$$. First, $$$7$$$ stages with the highest scores are chosen — for example, all stages except for the $$$2$$$-nd and the $$$6$$$-th can be chosen. Then your overall result is equal to $$$50 + 50 + 50 + 100 + 30 + 100 + 50 = 430$$$.</p><p>As of now, $$$n$$$ stages are completed, and you know the points you and Ilya got for these stages. However, it is unknown how many more stages will be held. You wonder what the smallest number of additional stages is, after which your result might become greater than or equal to Ilya's result, at least in theory. Find this number!</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). Description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of completed stages.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 100$$$) — your points for the completed stages.</p><p>The third line contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$0 \le b_i \le 100$$$) — Ilya's points for the completed stages.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single integer — the smallest number of additional stages required for your result to be able to become greater than or equal to Ilya's result.</p><p>If your result is already not less than Ilya's result, print $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019294938359194924" id="id0009971807248346987" class="input-output-copier">Copy</div></div><pre id="id0019294938359194924">5
1
100
0
1
0
100
4
20 30 40 50
100 100 100 100
4
10 20 30 40
100 100 100 100
7
7 59 62 52 27 31 55
33 35 50 98 83 80 64
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0038009875673040994" id="id005941371244003636" class="input-output-copier">Copy</div></div><pre id="id0038009875673040994">0
1
3
4
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you have scored $$$100$$$ points for the first stage, while Ilya has scored $$$0$$$. Thus, your overall result ($$$100$$$) is already not less than Ilya's result ($$$0$$$).</p><p>In the second test case, you have scored $$$0$$$ points for the first stage, while Ilya has scored $$$100$$$. A single stage with an opposite result is enough for both your and Ilya's overall scores to become equal to $$$100$$$.</p><p>In the third test case, your overall result is $$$30 + 40 + 50 = 120$$$, while Ilya's result is $$$100 + 100 + 100 = 300$$$. After three additional stages your result might become equal to $$$420$$$, while Ilya's result might become equal to $$$400$$$.</p><p>In the fourth test case, your overall result after four additional stages might become equal to $$$470$$$, while Ilya's result might become equal to $$$400$$$. Three stages are not enough.</p></div>