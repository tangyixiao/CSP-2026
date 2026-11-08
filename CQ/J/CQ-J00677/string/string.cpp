#include<bits/stdc++.h>
#define int long long
using namespace std;
struct p{
	int a2;
	char c2;
};
int n, a[200005], l = 1, r, ans;
char c[200005];
p x, y;
signed main( ){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >>n;
	for ( int i = 1; i<=n; i++ ){
		cin >>a[i] >>c[i];
	}
	x = {a[1], c[1]};
	y = {a[n], c[n]};
	r = n;
	while ( l < r ){
		if ( x.c2==y.c2 ){
			if ( x.a2 > y.a2 ){
				x.a2-=y.a2;
				y = {a[--r], c[r]};
			}else if ( x.a2 < y.a2 ){
				y.a2-=x.a2;
				x = {a[++l], c[l]};
			}else{
				x = {a[++l], c[l]};
				y = {a[--r], c[r]};
			}
		}else{
			if ( x.a2 > y.a2 ){
				ans+=y.a2;
				x.a2-=y.a2;
				y = {a[--r], c[r]};
			}else if ( x.a2 < y.a2 ){
				ans+=x.a2;
				y.a2-=x.a2;
				x = {a[++l], c[l]};
			}else{
				ans+=x.a2 + y.a2;
				x = {a[++l], c[l]};
				y = {a[--r], c[r]};
			}
		}
	}
	cout <<ans;
	return 0;
}
