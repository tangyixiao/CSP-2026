#include<bits/stdc++.h>
using namespace std;
int f[10005];
int tock[10005];
int ans[10005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	bool fl = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> f[i];
		if (f[i] < f[i - 1]) {
			fl = 0;
		}
	}
	if (fl) {
		for (int i = 1; i <= n; i++) {
			if (f[i] != f[i - 1]) {
				ans[f[i - 1]] = i - 1;
			}
		}
		ans[f[n]] = n;
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			int top = 0;
			for (int j = i; j <= n; j++) {
				/*cout << i << " " << j << " " << endl;
				for (int lty = 0; lty < top; lty++) {
					cout << tock[lty] << " ";
				}
				cout << endl;*/
				bool zo = 1;
				for (int z = 0; z < top; z++) {
					if (tock[z] == f[j]) {
						zo = 0;
						for (int k = z + 1; k < top; k++) {
							tock[k] = 0;
						}
						//cout<<i<<" "<<j<<" "<<z<<endl;
						top = z + 1;
					}
				}
				if (zo == 1) {
					/*cout<<i<<" "<<"genli"<<" ";
					for (int lty = 0; lty < top; lty++) {
						cout << tock[lty] << " ";
					}
					cout << endl;
					*/tock[top] = f[j];
					top++;
					/*cout<<"gen"<<" ";
					for (int lty = 0; lty < top; lty++) {
						cout << tock[lty] << " ";
					}
					cout << endl;
					*/
				}
				/*for (int lty = 0; lty < top; lty++) {
				cout << tock[lty] << " ";
				}
				cout << endl;
				*/
			}
			for (int i = 0; i < top; i++) {
				//cout<<tock[i]<<" ";
				ans[tock[i]]++;
				tock[i] = 0;
			}
			//cout << endl;
		}
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
		return 0;
	}
	return 0;
}