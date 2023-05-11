// 22938: 백발백준하는 명사수
//
// - 문제
// 백발백준은 무슨 과녁이던 백발백중하여 올림픽 금메달보다 따기 어렵다는 대한민국 양궁 국가대표 타이틀을 가지고 있다. 이런 백발백준이 현재 연마하는 스킬이 있는데...
// 바로 두 과녁을 한번에 맞추는 스킬이다. 이를 연습하기 위해 두 과녁이 겹치는 부분이 있어 한번에 맞추기가 가능한지 알아보고 싶어졌다.
// 여러분은 백발백준이 연습하는 과정을 도와주기 위해 원 모양으로 생긴 두 과녁이 겹치는 부분이 존재하는지 확인하는 프로그램을 작성해보자.
//
// - 입력
// 첫번째 줄에는 첫번째 과녁의 중심 X1, Y1와 반지름 R1이 주어진다.
// 두번째 줄에는 두번째 과녁의 중심 X2, Y2와 반지름 R2가 주어진다.
// X1, X2, Y1, Y2는 모두 정수이며, R1, R2는 모두 자연수이다.
// -10^9 ≤ X1, X2, Y1, Y2 ≤ 10^9, 0 < R1, R2 ≤ 10^9
//
// - 출력
// 두 과녁이 겹치면 YES, 아니면 NO를 출력한다.
// 단, 두 과녁이 한 점에서 만나는 경우는 겹치지 않는 것으로 생각한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  cout << (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) < r1 + r2 ? "YES" : "NO");
  return 0;
}