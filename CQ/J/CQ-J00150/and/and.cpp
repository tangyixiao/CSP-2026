#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n, m, ans;
int a[N], now[N], cnt;
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >>n >>m;
	for(int i=1; i<=n; i++)
		cin >>a[i];
	for(int i=31; i>=0; i--){
		cnt = 0;
		for(int j=1; j<=n; j++)
			if((a[j] >> i) & 1)
				now[++cnt] = a[j];
		if(cnt >= m){
			ans |= 1 << i;
			memcpy(a, now, sizeof now);
			n = cnt;
		}
	}
	cout <<ans <<endl;
	return 0;
}
