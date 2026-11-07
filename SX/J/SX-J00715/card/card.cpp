#include <bits/stdc++.h>
using namespace std;
int a[500010], b_i[200010];
vector < int, vector<int> >b;

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]][++b_i[a[i]]] = i;
	}
	for (int i = 1; i <= m; i++) {
		for(int j=1;j<=n;j++){
			for (int k = 1; k <=i; k++) {
				if()
			}
		}
	}
	return 0;
}
