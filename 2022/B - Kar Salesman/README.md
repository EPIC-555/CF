<h2><a href="https://codeforces.com/contest/2022/problem/B" target="_blank" rel="noopener noreferrer">2022B — Kar Salesman</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2022B](https://codeforces.com/contest/2022/problem/B) |

## Topics
`binary search` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Kar Salesman</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Karel is a salesman in a car dealership. The dealership has $$$n$$$ different models of cars. There are $$$a_i$$$ cars of the $$$i$$$-th model. Karel is an excellent salesperson and can convince customers to buy up to $$$x$$$ cars (of Karel's choice), as long as the cars are from different models.</p><p>Determine the minimum number of customers Karel has to bring in to sell all the cars.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$x$$$ ($$$1 \le n \le 5 \cdot 10^5$$$; $$$1 \le x \le 10$$$) — the number of different models of cars and the maximum number of cars Karel can convince a customer to buy.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the number of cars of each model.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$5 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum possible number of customers needed to sell all the cars.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005813025875828476" id="id007475836549191559" class="input-output-copier">Copy</div></div><pre data-content="4
3 2
3 1 2
3 3
2 1 3
5 3
2 2 1 9 2
7 4
2 5 3 3 5 2 5
" id="id005813025875828476"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3 2</div><div class="test-example-line test-example-line-odd test-example-line-1">3 1 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 3</div><div class="test-example-line test-example-line-even test-example-line-2">2 1 3</div><div class="test-example-line test-example-line-odd test-example-line-3">5 3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2 1 9 2</div><div class="test-example-line test-example-line-even test-example-line-4">7 4</div><div class="test-example-line test-example-line-even test-example-line-4">2 5 3 3 5 2 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009347887915733274" id="id007640666457275983" class="input-output-copier">Copy</div></div><pre id="id009347887915733274">3
3
9
7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first case, Karel only needs to lure in $$$3$$$ customers. He will convince the customers to buy the following models of cars: </p><ul> <li> Customer $$$1$$$ buys $$$2$$$ cars with model $$$1$$$ and $$$3$$$. </li><li> Customer $$$2$$$ buys $$$2$$$ cars with model $$$1$$$ and $$$2$$$. </li><li> Customer $$$3$$$ buys $$$2$$$ cars with model $$$1$$$ and $$$3$$$. </li></ul><p>For the second case, Karel only needs to lure in $$$3$$$ customers. He will convince the customers to buy the following models of cars: </p><ul> <li> Customer $$$1$$$ buys $$$2$$$ cars with model $$$1$$$ and $$$3$$$. </li><li> Customer $$$2$$$ buys $$$3$$$ cars with model $$$1$$$, $$$2$$$ and $$$3$$$. </li><li> Customer $$$3$$$ buys $$$1$$$ car with model $$$3$$$. </li></ul></div>