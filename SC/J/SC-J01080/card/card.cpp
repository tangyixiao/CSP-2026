#include<bits/stdc++.h>
using namespace std;
int n, m;
const int maxn = 1e6+5;
int a[maxn], f[maxn],ans[maxn];
stack<int>s;
int t[maxn];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	if (n <= 500) {
		for (int j = 0; j < n; ++j) {
			memset(f,0,sizeof(f));
			for (int i = j + 1; i <= n; ++i) {
				if (f[a[i]]) {
					while (s.top() != a[i]) {
						s.pop();
					}
				} else {
					s.push(a[i]);
					f[a[i]] = 1;
				}
			}
			while(!s.empty()){
			  ans[s.top()]++;
				s.pop();
  			}
		}
    for(int i=1;i<=m;++i){
		printf("%d ",ans[i]);
	}
		return 0;
	}
	int t=1;
	for (int i = 1; i <= m; ++i) {
		printf("%d ",t);
		++t;
	}
	return 0;
}