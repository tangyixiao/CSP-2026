#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+3;
int n,a[N],res;
char c[N];
int l,r;
int cost(int L,int R,int cnt){
	return (c[l] != c[r]) * cnt;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> a[i] >> c[i];
	}
	l = 1,r = n;
	while(l < r){
		res += cost(l,r,min(a[l],a[r]));
		if(a[l] < a[r]){
			a[r] -= a[l];
			a[l++] = 0;
		}else if(a[l] == a[r]){
			a[l++] = a[r--] = 0;
		}else{
			a[l] -= a[r];
			a[r--] = 0;
		}
	}
	cout << res;
	return 0;
}