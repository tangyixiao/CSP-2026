#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, ans = 2147483647;
int v[N], b[N];
int a[N][32];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		b[i] = x;
		int j = x, k = 0;
		while (j) a[i][++k] = j % 2, j /= 2;
	}
	for (int i = 30; i >= 1; i--){
		int sum = 0;
		for (int j = 1; j <= n; j++)
			if (!v[j] && a[j][i])
				sum++;
		if (sum >= m)
			for (int j = 1; j <= n; j++)
				if (!v[j] && !a[j][i])
					v[j] = 1;
	}
	for (int i = 1; i <= n; i++)
		if (!v[i])
			ans &= b[i];
	cout << ans;
	return 0;
}
