#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a[] = {
      0,
      1,
      4,
      12,
      24,
      36,
      60,
      192,
      120,
      180,
      240,
      576,
      360,
      1296,
      900,
      720,
      840,
      9216,
      1260,
      786432,
      1680,
      2880,
      15360,
      3600,
      2520,
      6480,
      61440,
      6300,
      6720,
      2359296,
      5040,
      (ll)pow(2, 30) * 3,
      7560,
      46080,
      983040,
      25920,
      10080,
      (ll)pow(2, 36) * 3,
      32400,
      184320,
      15120,
      44100,
      20160,
      (ll)pow(2, 16) * (ll)pow(3, 4),
      107520,
      25200,
      2985984,
      (ll)pow(2, 30) * (ll)pow(3, 2),
      27720,
      233280,
      45360,
      2949120,
      430080,
      129600,
      50400,
      414720,
      60480,
      (ll)pow(2, 18) * (ll)pow(3, 2) * 5,
      (ll)pow(2, 22) * (ll)pow(3, 4),
      921600,
      55440,
      (ll)pow(2, 10) * (ll)pow(3, 10),
      (ll)pow(2, 30) * 3 * 5,
      100800,
      83160,
      1658880,
      322560,
      (ll)pow(2, 18) * (ll)pow(3, 6),
      176400,
      (ll)pow(2, 22) * (ll)pow(3, 2) * 5,
      181440,
      (ll)pow(2, 46) * (ll)pow(3, 2),
      110880,
      (ll)pow(2, 28) * (ll)pow(3, 4),
      1166400,
      226800,
  };
  while (1) {
    int n;
    cin >> n;
    if (!n)
      break;
    cout << a[n] << '\n';
  }
  return 0;
}