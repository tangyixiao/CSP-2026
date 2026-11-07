#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	int ans = 0;
	for(int i = 30; i>= 0; i--) {
		int cnt = 0;
		for(int j = 0; j < a.size(); j++)if(a[j] & (1<<i)) {
			cnt++;
		}
//		cout<<cnt<<endl;
		if(cnt >= m) {
			ans += 1<<i;
			vector<int> b;
			for(auto id: a) {
				if(id & (1<<i)) {
					b.push_back(id);
				}
			}
			a = b;
		}
	}
	cout<<ans;
}