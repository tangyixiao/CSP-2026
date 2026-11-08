#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10, M=3e5+10;
int n, m, a[N], ne[N], suf[M], f[N], s[N], ans[M];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >>n >>m;
	for(int i=1; i<=n; i++)
		cin >>a[i];
	for(int i=n; i>=1; i--){
		ne[i] = suf[a[i]];
		suf[a[i]] = i;
	}
	for(int i=1; i<=n; i++){
		f[i] ++; // 以自己开头
		f[ne[i] ? ne[i] : i+1] += f[i];
	}
	for(int i=1; i<=n; i++)
		s[i] += f[i], s[ne[i] ? ne[i] : i] -= f[i];
	for(int i=1; i<=n; i++){
		s[i] += s[i-1];
		ans[a[i]] += i - s[i];
	}
	for(int i=1; i<=m; i++)
		cout <<ans[i] <<(i == m ? '\n' : ' ');
	return 0;
}
