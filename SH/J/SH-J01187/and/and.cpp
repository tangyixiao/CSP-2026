#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 2e5 + 10;
int n, m;
int a[maxn];

namespace baoli{
	int solve(){
		int res = 0;
		for(int i = 0;i<(1<<n);i++){
			int cnt = 0;
			for(int j = 0;j<n;j++){
				if((i>>j)&1) cnt++;
			}
			if(cnt != m) continue;
			int ans = (1<<20)-1;
			for(int j = 0;j<n;j++){
				if((i>>j)&1) ans &= a[j];
			}
			res = max(res, ans);
		}
		return res;
	}
}
namespace m1{
	int solve(){
		int res = 0;
		for(int i = 0;i<n;i++){
			res = max(res, a[i]);
		}
		return res;
	}
}
namespace m2{
	int solve(){
		int res = 0;
		for(int i = 0;i<n;i++){
			for(int j = i+1;j<n;j++){
				res = max(res, a[i]&a[j]);
			}
		}
		return res;
	}
}
namespace mn{
	int solve(){
		int res = (1<<20)-1;
		for(int i = 0;i<n;i++) res&=a[i];
		return res;
	}
}
namespace mn_1{
	int pre[maxn], back[maxn];
	int solve(){
		pre[0] = a[0];
		for(int i = 1;i<n;i++) pre[i] = pre[i-1]&a[i];
		back[n-1] = a[n-1];
		for(int i =n-2;i>=0;i--) back[i] = back[i+1]&a[i];
		int res = max(pre[n-2], back[1]);
		for(int i = 1;i<n-1;i++){
			res = max(res, pre[i-1]&back[i+1]);
		}
		return res;
	}
}
bool cmp(int a,int b){
	return a>b;
}

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	
	if(m==1){
		cout << m1::solve();
		return 0;
	}
	if(m==2){
		cout << m2::solve();
		return 0;
	}
	if(m==n){
		cout << mn::solve();
		return 0;
	}
	if(m==n-1){
		cout << mn_1::solve();
		return 0;
	}
	if(n<=20){
		cout << baoli::solve();
		return 0;
	}
	sort(a, a+n, cmp);
	int res = (1<<20)-1;
	for(int i = 0;i<m;i++) res&=a[i];
	cout << res;
}

