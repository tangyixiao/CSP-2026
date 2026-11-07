#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int MX=2e5+5;
int n, m;
int a[MX];
int ans;
int popcnt(int x) {
	int t=0;
	while(x!=0) {
		if(x%2==1)  t++;
		x/=2;
	}
	return t;
}
bool cmp(int x, int y) {
	int xcnt=popcnt(x);
	int ycnt=popcnt(y);
	if(xcnt==ycnt)  return x>y;
	else  return xcnt>ycnt;
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1, cmp);
	ans=a[1];
	for(int i=2; i<=m; i++) {
		ans&=a[i];
	}
	cout << ans;
	return 0;
 }
