// 18186: 라면 사기 (Large)
//
// - 문제
// 라면매니아 교준이네 집 주변에는 N개의 라면 공장이 있다. 각 공장은 1번부터 N번까지 차례대로 번호가 부여되어 있다. 교준이는 i번 공장에서 정확하게 Ai개의 라면을 구매하고자 한다(1 ≤ i ≤ N).
// 교준이는 아래의 세 가지 방법으로 라면을 구매할 수 있다.
// i번 공장에서 라면을 하나 구매한다(1 ≤ i ≤ N). 이 경우 비용은 B원이 든다.
// i번 공장과 (i+1)번 공장에서 각각 라면을 하나씩 구매한다(1 ≤ i ≤ N-1). 이 경우 비용은 (B+C)원이 든다.
// i번 공장과 (i+1)번 공장, (i+2)번 공장에서 각각 라면을 하나씩 구매한다(1 ≤ i ≤ N-2). 이 경우 비용은 (B+2C)원이 든다.
// 최소의 비용으로 라면을 구매하고자 할 때, 교준이가 필요한 금액을 출력하는 프로그램을 작성하시오.
//
// - 입력
// 첫 번째 줄에 라면 공장의 개수를 의미하는 자연수 N과 두 자연수 B, C가 사이에 공백을 두고 주어진다.
// 두번째 줄에 N개의 정수 A1, ···, AN가 사이에 공백을 두고 주어진다.
//
// - 출력
// 첫 번째 줄에 교준이가 필요한 최소 금액을 출력한다.
//
// - 제한
// 모든 입력 데이터는 다음 조건을 만족한다.
// 3 ≤ N ≤ 10^6
// 1 ≤ B ≤ 10^6
// 1 ≤ C ≤ 10^6
// 0 ≤ Ai ≤ 10^6 (1 ≤ i ≤ N)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n, b, c, ans = 0, cnt;
  cin >> n >> b >> c;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  if (b < c) {
    for (int i = 0; i < n; i++)
      ans += v[i];
    ans *= b;
  } else {
    for (int i = 0; i < n - 2; i++) {
      while (v[i] && v[i + 1] && v[i + 2]) {
        if (v[i + 1] > v[i + 2]) {
          cnt = min(v[i], v[i + 1] - v[i + 2]);
          v[i] -= cnt;
          v[i + 1] -= cnt;
          ans += (b + c) * cnt;
        } else {
          cnt = min(v[i], v[i + 1]);
          v[i] -= cnt;
          v[i + 1] -= cnt;
          v[i + 2] -= cnt;
          ans += (b + 2 * c) * cnt;
        }
      }
      ans += b * v[i];
      v[i] = 0;
    }
    cnt = min(v[n - 2], v[n - 1]);
    ans += (b + c) * cnt;
    v[n - 2] -= cnt;
    v[n - 1] -= cnt;
    ans += b * (v[n - 2] + v[n - 1]);
  }
  cout << ans;
  return 0;
}