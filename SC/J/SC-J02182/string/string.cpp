#include <bits/stdc++.h>
#define int long long
#define fp(i,a,b) for(int i=a;i<=b;i++)
#define pf(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

constexpr int MN = 2e5+10;
int n, a[MN], b[MN], L;
char c[MN], d[MN];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n;
	fp(i,1,n) cin>>a[i]>>c[i], L += a[i];
	fp(i,1,n) b[i] = a[n-i+1], d[i] = c[n-i+1];
	fp(i,1,n) {
		a[i] += a[i-1];
		if(a[i] >= L/2) {
			a[i] = L/2;
			break;
		}
	}
	fp(i,1,n) {
		b[i] += b[i-1];
		if(b[i] >= L/2) {
			b[i] = L/2;
			break;
		}
	}
//	fp(i,1,n) cout<<a[i]<<' '<<c[i]<<endl;
//	fp(i,1,n) cout<<b[i]<<' '<<d[i]<<endl;
	
	int p = 1, q = 1, tot = 0, ans = 0;
	while(tot < L/2) {
		if(a[p] <= tot) p ++;
		if(b[q] <= tot) q ++;
		if(c[p] != d[q])
			ans += min(a[p], b[q]) - tot;
		tot = min(a[p], b[q]);
//		cout<<p<<' '<<q<<' '<<tot<<' '<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
