#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
stack <int> sta;
const int N = 5*1e5+10;
int a[N];int ci[N];int sum[N];

void solve() {
	int m,n;cin>>n>>m;
	for (int i = 1;i <= n;i++) cin>>ci[i];
	for (int i = 1;i <= n;i++) {
		memset(a,0,sizeof(a));
		for (int j = i;j <= n;j++) {
			int k = ci[j];
			if (a[k] == 0) {
				a[k]++;
				sta.push(k);
			} else {
				while (sta.top() != k) {
					a[sta.top()]--;
					sta.pop();
				}
			}	
		}
		while (!sta.empty()) {
			sum[sta.top()]++;
			sta.pop();
		}
	}
	for (int i = 1;i <= m;i++) {
		cout<<sum[i]<<" ";
	}
	
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 1;
	while (T--) {
		solve();
	}
	fclose(stdin);fclose(stdout);
	return 0;
}