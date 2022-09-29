// 2863: 이게 분수?
//
// - 문제
// 상근이는 덧셈과 나눗셈을 엄청나게 못한다. 이런 상근이를 위해 정인이는 상근이에게 다음과 같은 문제를 냈다.
// 정인이는 양의 정수 A,B,C,D로 이루어진 2*2 표를 그렸다.
// A	B
// C	D
// 위와 같은 표가 있을 때, 표의 값은 A/C + B/D 이다.
// 상근이는 표를 몇 번 돌리면 표의 값이 최대가 되는지 궁금해졌다.
// 표는 90도 시계방향으로 돌릴 수 있다.
// 문제 상단의 표를 1번 회전 시키면 다음과 같다.
// C	A
// D	B
// 2번 회전 시키면 다음과 같이 된다.
// D	C
// B	A
// 표에 쓰여 있는 A,B,C,D가 주어졌을 때, 표를 몇 번 회전시켜야 표의 값이 최대가 되는지 구하는 프로그램을 작성하시오.
//
// - 입력
// 첫째 줄에 A와 B가 공백으로 구분되어 주어진다. 둘째 줄에 C와 D가 공백으로 구분되어 주어진다. 모든 수는 100보다 작거나 같은 양의 정수이다.
//
// - 출력
// 첫째 줄에 표를 몇 번 돌려야 표의 값이 최대가 되는지 출력한다. 만약, 그러한 값이 여러개라면 가장 작은 값을 출력한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
  double arr[4], ans[4];
  double m = 0;
  int result, cnt = 0;
  for (int i = 0; i < 4; i++)
    cin >> arr[i];
  ans[0] = arr[0] / arr[2] + arr[1] / arr[3];
  ans[1] = arr[2] / arr[3] + arr[0] / arr[2];
  ans[2] = arr[3] / arr[1] + arr[2] / arr[0];
  ans[3] = arr[1] / arr[0] + arr[3] / arr[2];
  for (int i = 0; i < 4; i++)
    if (m < ans[i]) {
      m = ans[i];
      result = i;
    }
  for (int i = 0; i < 4; i++) {
    if (m == ans[i])
      cnt++;
  }
  if (cnt == 1)
    cout << result << '\n';
  else
    cout << -1 << '\n';
  return 0;
}