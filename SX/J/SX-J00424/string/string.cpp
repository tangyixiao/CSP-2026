#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n, a[200005], b[200005], m[200005], l, r, ans, flag;
char c[200005];
vector<char>c1,c2;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		m[i] = m[i-1];
		m[i]+=a[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = m[i-1]+1;j<=m[i];j++){
			c1.push_back(c[i]);
		}
	}
	for(int i = n;i>=1;i--){
		for(int j = m[i];j>=m[i-1]+1;j--){
			c2.push_back(c[i]);
		}
	}
	for(int i = 0;i<m[n]/2;i++){
		if(c1[i]!=c2[i]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}