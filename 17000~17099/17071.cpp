// 17071: 숨바꼭질 5
//
// - 문제
// 수빈이는 동생과 숨바꼭질을 하고 있다. 수빈이는 현재 점 N(0 ≤ N ≤ 500,000)에 있고, 동생은 점 K(0 ≤ K ≤ 500,000)에 있다. 수빈이는 걷거나 순간이동을 할 수 있다. 만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다. 순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다. 동생은 항상 걷기만 한다. 동생은 항상 매 초마다 이동을 하며, 이동은 가속이 붙는다. 동생이 이동하는 거리는 이전에 이동한 거리보다 1을 더한 만큼 이동한다. 즉, 동생의 처음 위치는 K, 1초가 지난 후 위치는 K+1, 2초가 지난 후 위치는 K+1+2, 3초가 지난 후의 위치는 K+1+2+3이다.
// 수빈이와 동생의 위치가 주어졌을 때, 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초 후인지 구하는 프로그램을 작성하시오. 동생을 찾는 위치는 정수 좌표이어야 하고, 수빈이가 0보다 작은 좌표로, 50만보다 큰 좌표로 이동하는 것은 불가능하다.
//
// - 입력
// 첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다. N과 K는 정수이다.
//
// - 출력
// 수빈이가 동생을 찾는 가장 빠른 시간을 출력한다. 수빈이가 동생을 찾을 수 없거나, 찾는 위치가 500,000을 넘는 경우에는 -1을 출력한다.

#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, k;
vector<vector<int>> sister(500001, vector<int>(2, INF));
vector<int> brother(500001, 0);

void bfs() {
  queue<pair<int, int>> q;
  q.push({n, 0});
  sister[n][0] = 0;
  while (!q.empty()) {
    int curr = q.front().first;
    int time = q.front().second;
    q.pop();
    vector<int> nxt{curr * 2, curr - 1, curr + 1};
    for (int next : nxt)
      if (next >= 0 && next <= 500000)
        if (sister[next][(time + 1) % 2] > time + 1) {
          q.push({next, time + 1});
          sister[next][(time + 1) % 2] = time + 1;
        }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> k;
  bfs();
  int step = 1;
  while (k < 500001) {
    if (sister[k][brother[k] % 2] <= brother[k]) {
      cout << brother[k];
      return 0;
    }
    if (k + step < 500001)
      brother[k + step] = brother[k] + 1;
    k += step;
    step++;
  }
  cout << -1;
  return 0;
}