#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int MX=2e5+5;
int n, ans;
int a[MX];
char c[MX];
signed main(){
   freopen("string.in", "r", stdin);
   freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> a[i] >> c[i];
	}
	int l=1, h=n;
	int last_l=0, last_h=0;
	while(l<h) {
		int now_l=a[l]-last_l;
		int now_h=a[h]-last_h;
		int nn=min(now_l, now_h);
		if(c[l]!=c[h]) {
			ans+=nn;
	//		cout << nn << ' ';
		}
		last_l+=nn;
		last_h+=nn;
		if(last_l>=a[l]) {
			l++;
			last_l=0;
		}
		if(last_h>=a[h]) {
			h--;
			last_h=0;
		}
		
	//	cout << l << ' ' << h << ' ' << nn << '\n';
	}
	cout << ans ;
	return 0;
}

