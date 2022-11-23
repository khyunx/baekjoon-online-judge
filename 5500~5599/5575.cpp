// 5575: 타임 카드
//
// - 문제
// JOI 상사는 직원의 근무시간을 타임 카드로 관리하고있다. 직원들은 전용 장비를 사용하여 타임 카드에 출근 시간을 기록한다. 근무를 마치고 퇴근할 때도 타임 카드에 퇴근 시간을 기록한다. 타임카드에서 사용하는 시간단위는 24 시간제를 사용한다.
// 보안상의 이유로 직원들의 출근 시간은 7시 이후이다. 또한, 모든 직원은 23시 이전에 퇴근한다. 직원의 퇴근 시간은 항상 출근 시간보다 늦다.
// 입력으로 JOI 상사의 3 명의 직원 A 씨, B 씨, C 씨의 출근 시간과 퇴근 시간이 주어 졌을 때 각 직원의 근무시간을 계산하는 프로그램을 작성하라.
//
// - 입력
// 입력은 3 행으로 구성된다.
// 첫 번째 줄에는 A 씨의 출근 시간과 퇴근 시간,
// 두 번째 줄에는 B 씨의 출근 시간과 퇴근 시간,
// 세 번째 줄에는 C 씨의 출근 시간과 퇴근 시간이 각각 공백으로 구분되어 있다.
// 시간은 각각 공백으로 구분된 3 개의 정수로 쓰여져있다.
// 3 개의 정수 h(7 ≦ h ≦ 22), m(0 ≦ m ≦ 59), s(0 ≦ s ≦ 59)는 h시 m 분 s 초를 나타낸다.
//
// - 출력
// 첫 번째 줄에 A 씨의 근무 시간,
// 두 번째 줄에 B 씨의 근무 시간,
// 세 번째 줄에 C 씨의 근무 시간을 출력하라.
// 근무 시간이 h 시간 m 분 s 초이면 h, m, s의 순으로 공백으로 분리하여 출력하라.

#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int i = 0; i < 3; i++) {
    int h, m, s, hh, mm, ss;
    cin >> h >> m >> s >> hh >> mm >> ss;
    int ah = hh - h;
    int am = mm - m;
    int as = ss - s;
    while (as < 0) {
      as += 60;
      am--;
    }
    while (am < 0) {
      am += 60;
      ah--;
    }
    cout << ah << ' ' << am << ' ' << as << '\n';
  }
  return 0;
}