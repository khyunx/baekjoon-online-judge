// 27961: 고양이는 많을수록 좋다
//
// - 문제
// 마법소녀인 마도카는 너무나도 고양이를 좋아하는 나머지 마법을 이용하여 고양이 N마리를 집에서 키우기로 결심했다!
// 마도카는 한 번의 행동에서 다음 2가지 마법 중 하나를 선택하여 사용한다. 처음에는 마도카의 집에 고양이가 존재하지 않는다.
// 생성 마법: 고양이 1마리를 마도카의 집에 생성한다.
// 복제 마법: 마도카의 집에 있는 고양이 일부 또는 전부를 대상으로 하여 복제한다. 즉, 만약 현재 마도카의 집에 고양이가 k마리 존재한다면, 0마리 이상 k마리 이하의 고양이를 마도카의 집에 추가할 수 있다.
// 마도카는 위의 2가지 마법을 적절히 사용하여, 최소의 행동 횟수로 마도카의 집에 정확히 N마리의 고양이가 있도록 만들고 싶다. 계산을 어려워하는 마도카를 위해 최소의 행동 횟수를 계산해주자!
//
// - 입력
// 첫 번째 줄에 키우기를 원하는 고양이의 수 N(0 ≤ N ≤ 10^{12})이 정수로 주어진다.
//
// - 출력
// 첫 번째 줄에 정확히 N마리의 고양이를 마도카의 집에 들일 수 있는 최소의 행동 횟수를 출력한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n, ans = 0, a = 0;
  cin >> n;
  while (a < n) {
    if (a == 0)
      a++;
    else
      a *= 2;
    ans++;
  }
  cout << ans;
  return 0;
}