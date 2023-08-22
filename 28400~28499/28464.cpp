// 28464: Potato
//
// - 문제
// 감자튀김을 좋아하는 박 모 씨와 다르게, 성우는 감자튀김을 그렇게 좋아하지는 않는다. 어느 날 박 모 씨와 성우는 수많은 감자튀김을 받게 되었고, 이를 나누어 가지기로 했다.
// 책상 위에 $N$개의 접시가 놓여있다. $i$번째 접시에는 $a_i$개의 감자튀김이 있다. 박 모 씨와 성우는 다음 행동을 번갈아 시행한다.
// 책상 위에 남아있는 접시 하나를 고르고, 접시와 그 위에 놓인 모든 감자튀김을 가져간다.
// 이는 책상 위의 접시가 모두 사라질 때까지 반복한다. 맨 처음 접시를 가져가는 사람은 박 모 씨다.
// 박 모 씨는 가져가는 감자튀김의 양을 최대화하려 하고, 성우는 가져가는 감자튀김의 양을 최소화하려 한다. 두 사람이 항상 최선의 행동을 한다고 가정할 때, 성우와 박 모 씨가 최종적으로 가져가는 감자튀김의 양을 구하여라.
//
// - 입력
// 첫 번째 줄에 접시의 개수 $N$이 주어진다. $(1 \leq N \leq 200\ 000)$ 
// 두 번째 줄에 각 접시에 있는 감자튀김의 개수 $a_1, a_2, \cdots, a_n$가 공백으로 구분되어 주어진다. $(1 \leq a_i \leq 10\ 000)$ 
//
// - 출력
// 첫 번째 줄에 성우가 가져가는 감자튀김의 양과 박 모 씨가 가져가는 감자튀김의 양을 공백으로 구분하여 출력한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  cout << accumulate(v.begin(), v.begin() + n / 2, 0) << ' ' << accumulate(v.begin() + n / 2, v.end(), 0);
  return 0;
}