// 15652: N과 M (4)
//
// - 문제
// 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
// 1부터 N까지 자연수 중에서 M개를 고른 수열
// 같은 수를 여러 번 골라도 된다.
// 고른 수열은 비내림차순이어야 한다.
// 길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK-1 ≤ AK를 만족하면, 비내림차순이라고 한다.
//
// - 입력
// 첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
//
// - 출력
// 한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
// 수열은 사전 순으로 증가하는 순서로 출력해야 한다.

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v(7, 0);

void dfs(int cnt) {
  if (cnt == m) {
    for (int i = 0; i < m; i++)
      cout << v[i] << ' ';
    cout << '\n';
    return;
  }
  for (int i = 1; i <= n; i++)
    if (i >= v[cnt - 1]) {
      v[cnt] = i;
      dfs(cnt + 1);
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  cin >> n >> m;
  dfs(0);
  return 0;
}