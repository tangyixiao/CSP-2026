#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int n, m;
int a[N];

int main() {
  freopen("and.in", "r", stdin);
  freopen("and.out", "w", stdout);

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (n <= 20000) {
    if (m == 1) {
      sort(a, a + n, greater<int>());
      cout << a[0];
      return 0;
    }
    if (m == n) {
      int ans = a[0];
      for (int i = 1; i < n; i++) {
	ans &= a[i];
      }
      cout << ans;
      return 0;
    }
    if (m == 2) {
      int maxn = 0;
      for (int i = 0; i < n; i++) {
	for (int j = i + 1; j < n; j++) {
	  maxn = max(maxn, a[i] & a[j]);
	}
      }
      cout << maxn;
      return 0;
    }
  }

  fclose(stdin);
  fclose(stdout);
  return 0;
}
