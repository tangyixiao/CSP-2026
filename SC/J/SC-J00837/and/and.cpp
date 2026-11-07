#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
const int N = 2e5 + 10;
int n,m,ans,mxj,a[N],b[N][35];
vector<int> vec;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	vector<int> res;
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
		res.push_back(i);
		for(int j=0;j<=30;j++) {
			b[i][j] = a[i] & (1 << j);
		}
	}
	int k = 30;
	for(;k>=0;k--) {
		vector<int> tmp;
		for(auto i : res) {
			if(b[i][k]) {
				tmp.push_back(i);
			}
		}
		if(tmp.size() >= m) {
			ans += (1 << k);
			res = tmp;
		}
	}
	cout << ans;
	return 0;
}