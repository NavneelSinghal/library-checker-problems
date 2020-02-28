Problem Statement / 問題文
---------

You are given an integer sequence $a_0, a_1, ..., a_{N-1}$ with the length $N$.
Process the following $Q$ queries in order:

- `$l_i$ $r_i$ $k_i$`: Print $k_i$th smallest value in $(a_{l_i}, a_{l_i + 1}, ..., a_{r_i - 1})$.

Problem Statement (Japanese) / 問題文 (日本語)
---------

長さ $N$ の数列 $a_0, a_1, ..., a_{N-1}$ に $Q$ 個のクエリが飛んできます。処理してください。

- `$l_i$ $r_i$ $k_i$`: $(a_{l_i}, a_{l_i + 1}, ..., a_{r_i - 1})$ のうち $k_i$ 番目に小さい値を出力する。

Constraints / 制約
---------

- ${{param N_MIN}} \leq N \leq {{param N_MAX}}$
- ${{param Q_MIN}} \leq Q \leq {{param Q_MAX}}$
- ${{param A_MIN}} \leq a_i \leq {{param A_MAX}}$
- $0 \leq l_i < r_i \leq N$
- $0 \leq k_i < r_i - l_i$

Input / 入力
---------

~~~
$N$ $Q$
$a_0$ $a_1$ ... $a_{N - 1}$
$l_0$ $r_0$ $k_0$
$l_1$ $r_1$ $k_1$
:
$l_{Q-1}$ $r_{Q-1}$ $k_{Q-1}$
~~~

{{example example_00}}