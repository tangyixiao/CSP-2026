#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
const int N = 2e5 + 10;
int n,l,ans,lpos,r,rpos;
pair<int,char> a[N];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	lpos = l = 1,r = n;
	for(int i=1;i<=n;i++) {
		cin >> a[i].first >> a[i].second;
		rpos += a[i].first;
	}
	while(lpos <= rpos) {
		int x = a[l].first;
		while(r > l && a[r].first <= x) {
			if(a[r].second != a[l].second) {
				ans += a[r].first;
			}
			x -= a[r].first;
			rpos -= a[r].first;
			r--;
		}
		if(x > 0 && a[r].first > x && r > l) {
			if(a[r].second != a[l].second) {
				ans += x;
			}
			rpos -= x;
			a[r].first -= x;
		}
		l++;
		lpos += a[l].first;
	}
	cout << ans;
	return 0;
}