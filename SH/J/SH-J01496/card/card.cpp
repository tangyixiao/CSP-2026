#include<bits/stdc++.h>
using namespace std;

int n, m, ans[100005], a[200005];
int t[100005] = {0}, b[200005], x[100005];

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		for (int j = i;j < n;j++) {
			if (t[a[j]] == 0) {
				b[j] = a[j];
				t[a[j]] = 1;
				x[a[j]] = j;
			} else {
				for (int k = x[a[j]]; k < j;k++) {
					if (k == x[a[j]]) {
						b[k] = 0;
						x[a[j]] = j;
					} else{
						b[k] = 0;
						t[a[k]] = 0;
						x[a[k]] = -1;
					}
				}
				b[j] = a[j];
			}
		}
		for (int j = 1;j <= m;j++) {
			ans[j] += t[j];
			t[j] = 0;
			x[j] = 0;
		}
		for (int j = 0;j < n;j++) {
			b[j] = 0;
		}
	}
	for (int i = 1;i <= m;i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
