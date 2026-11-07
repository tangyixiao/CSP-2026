#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
const int M = 3e5 + 10;

int a[N];
int idx[M];
bool tmp[M];
int ans[M];

int main() {
  freopen("card.in", "r", stdin);
  freopen("card.out", "w", stdout);
  
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int k = 1; k <= n; k++) {
    memset(idx, 0, sizeof(idx));
    memset(tmp, 0, sizeof(tmp));
    for (int i = k; i <= n; i++) {
      if (idx[a[i]]) {
	for (int j = idx[a[i]]; j <= i; j++) {
	  tmp[a[j]] = 0;
	}
	tmp[a[i]] = 1;
      } else {
	tmp[a[i]] = 1;
	idx[a[i]] = i;
      }
    }
    for (int i = 1; i <= m; i++) {
      if (tmp[i]) ans[i]++;
    }
  }

  for (int i = 1; i <= m; i++) {
    cout << ans[i] << ' ';
  }

  fclose(stdin);
  fclose(stdout);
  return 0;
}
