#include<bits/stdc++.h>
using namespace std;
bool f[400000];
int n,m;
stack<int> stk;
int a[600000],ans[600000];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			if(f[a[j]]) {
				int k = 1;
				while(stk.size() > 0) {
					f[stk.top()] = 0;
					if(stk.top() == a[j]) {
						stk.pop();
						break;
					}
					stk.pop();
				}
			}
			stk.push(a[j]);
			f[a[j]] = true;
		}
		for(int j = 1; j <= m; j++) {
			if(f[j]) {
				ans[j] ++;
			}
		}
		while(!stk.empty()) {
			stk.pop();
		}
		for(int k = 1; k <= m; k++) {
			f[k] = false;
		}
		for(int j = 1; j <= m; j++) {
			cout << ans[j] << " ";
		}
	}
	return 0;
}

