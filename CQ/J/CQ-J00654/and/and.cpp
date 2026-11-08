#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define fi first
#define se second
const int N = 2e5 + 5;
int n, m, ans, a[N], mx, pre[N], suf[N];
//int len;
int f[32] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
//vector<int> v[32];
void dfs(int k, int w, int cnt){
	if(k > n){
		if(cnt == m)
		ans = max(ans, w);
		return ;
	}
	if(w == -1) dfs(k+1, a[k], cnt+1) ;
	else dfs(k+1, w & a[k], cnt+1);
	dfs(k+1, w, cnt);
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(0) -> ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1, x;i<=n;i++){
		cin>>x;
		a[i] = x;
		mx = max(mx, x);
		ans &= x;
	}
	if(n <= 20){
		ans = 0;
		dfs(1, -1, 0);
		cout<<ans<<'\n';
		return 0;
	}
	if(n <= 2000){
		if(m == 1){
			cout<<mx<<'\n';
			return 0;
		}
		if(m == n){
			cout<<ans<<'\n';
			return 0;
		}
		if(m == 2){
			ans = 0;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i == j) continue;
					ans = max(ans, a[j] & a[i]);
				}
			}
			cout<<ans<<'\n';
			return 0;
		}
		return 0;
	}
	if(m == n - 1){
		ans = 0;
		pre[1] = a[1];
		for(int i=2;i<=n;i++) pre[i] = pre[i-1] & a[i];
		suf[n] = a[n];
		for(int i=n-1;i>=1;i--) suf[i] = suf[i+1] & a[i];
		ans = max(suf[n-1], pre[n-1]);
		for(int i=2;i<n;i++){
			ans = max(ans, pre[i-1] & suf[i+1]);
		}
		cout<<ans<<'\n';
		return 0;
	}
	sort(a+1, a+1+n, [](int x, int y){
		return x > y;
	});
	ans = a[1];
	for(int i=1;i<=m;i++){
		ans &= a[i];
	}
	cout<<ans<<'\n';
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/ 

