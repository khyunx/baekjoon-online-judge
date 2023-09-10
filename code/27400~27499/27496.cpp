// 27496: 발머의 피크 이론
//
// - 문제
// 발머의 피크 이론이란 혈중 알코올 농도 C가 (0.129 ≤ C≤0.138)일때 초인적인 프로그래밍 능력을 가지게 된다는 이론이다. 기령이는 발머의 피크 이론 신봉자이기 때문에 지금부터 코딩테스트를 볼 때까지 혈중 알코올 농도를 최대한 지키려고 한다. 기령이는 매 시간마다 정해진 술을 섭취하며, 섭취한 알코올은 일정 시간이 지나면 분해된다. 기령이가 지금부터 코딩테스트를 볼 때까지 얼마나 혈중 알코올 농도를 0.129와 0.138 사이로 지킬 수 있는지 알아내보자. 단, 혈중 알코올 농도 증가량은 술에 포함된 알코올의 양 A × 0.001로 계산하며 최초의 혈중 알코올 농도는 0이다.
//
// - 입력
// 첫째 줄에 코딩테스트를 볼 때까지 남은 시간 N(1 ≤ N ≤ 1,000,000), 섭취한 알코올의 지속시간 L(1 ≤ L ≤ 10,000)이 공백으로 구분되어 주어진다.
// 둘째 줄에 술에 포함된 알코올의 양 정수 a_i(0 ≤ a_i ≤ 200)가 공백으로 구분되어 주어진다.
//
// - 출력
// 혈중 알코올 농도 C를 (0.129 ≤ C ≤ 0.138)로 유지한 시간을 출력한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, L, ans = 0;
  long long sum = 0;
  cin >> N >> L;
  vector<int> v(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
    sum += v[i];
    if (i >= L) {
      sum -= v[i - L];
    }
    if (sum >= 129 && sum <= 138)
      ans++;
  }
  cout << ans;
  return 0;
}