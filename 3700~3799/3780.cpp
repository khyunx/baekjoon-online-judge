// 3780: 네트워크 연결
//
// - 문제
// 종빈이는 아주 큰 그룹의 총수다. 이 그룹은 1부터 N번까지의 번호로 구분할 수 있는 N개의 기업을 운영하고 있다. 현재 각 기업은 서로 독립적인 자체 컴퓨팅 및 통신센터를 가지고 있다.
// 어느 날 종빈이는 계열사의 CTO인 서현이에게 서비스 개선을 위해 각 기업의 서버를 네트워크로 연결하여 단일 통신센터에서 관리 가능한 클러스터 형태로 구성할 것을 제안했다. 종빈이의 제안을 들은 서현이는 다음과 같은 병합 과정을 고안해냈다.
// 클러스터 A를 제공하는 기존에 존재하는 센터 I를 고른다.
// 클러스터 B를 제공하는 기업 J를 고른다. B는 A가 아닌 임의의 클러스터이며, J는 센터가 아닐 수 있다.
// I와 J를 통신 라인으로 연결한다. 이때 기업 I와 J를 잇는 라인의 길이는 |I – J|(mod 1000)이다.
// 위 방식을 통해 클러스터 A와 B는 새로운 클러스터로 합쳐지며, 이 클러스터는 B의 센터에 의해 제공된다.
// 이러한 병합 과정을 거치던 중에, 각 기업에서 현재 센터까지 연결되는 라인의 길이가 총 얼마나 되는지에 관한 문의가 들어왔다. 서현이를 위해 병합하는 과정과 그 과정에서 통신센터와 각 기업을 잇는 라인의 길이를 구하는 프로그램을 작성해보자.
//
// - 입력
// 입력은 여러 개의 테스트케이스로 주어진다. 입력의 첫 번째 줄에는 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스에는 기업의 수를 나타내는 N(4 ≤ N ≤ 20,000)이 주어진다. 다음은 몇 개의 줄에 걸쳐 아래 두 가지 종류의 명령어가 들어온다.
// E I – 기업 I와 현재 I의 센터까지의 거리를 출력한다.
// I I J – 센터 I를 기업 J에 연결한다.
// 각 테스트케이스의 끝에는 단어 O가 주어진다. 각 테스트케이스에서 명령어의 총 개수는 200,000개를 넘지 않으며, 그중 I 명령어의 개수는 N개보다 작다.
//
// - 출력
// E 명령어가 들어올 때마다 한 줄에 해당 거리를 출력한다.

#include <bits/stdc++.h>
using namespace std;

vector<int> p, dist;

int find(int x) {
  if (p[x] != x) {
    int node = find(p[x]);
    dist[x] += dist[p[x]];
    p[x] = node;
  }
  return p[x];
}

void merge(int x, int y) {
  dist[x] = abs(x - y) % 1000;
  p[x] = y;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    p.resize(N + 1);
    iota(p.begin(), p.end(), 0);
    dist.resize(N + 1);
    fill(dist.begin(), dist.end(), 0);
    while (1) {
      char c;
      cin >> c;
      if (c == 'E') {
        int i;
        cin >> i;
        find(i);
        cout << dist[i] << '\n';
      } else if (c == 'I') {
        int i, j;
        cin >> i >> j;
        merge(i, j);
      } else {
        break;
      }
    }
  }
  return 0;
}