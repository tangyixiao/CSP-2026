#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+3,M = 32,inf = 1e17;
int n,m,a[N],res;
int bit[M],cnt;
int st[N],zyc;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;++i)
		cin >> a[i];
	for(int i=30;i>=0;--i){
		int tot = 0;
		for(int j=1;j<=n;++j){
			if(a[j] & (1<<i)) ++tot;
		}
		if(tot >= m){
			bit[++cnt] = i;
		}else{
			for(int j=1;j<=n;++j){
				if(a[j] & (1<<i)){
					a[j] ^= (1<<i);
				}
			}
		}
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=cnt;++i){
		int w = (1<<bit[i]);
		int l = 1,r = n+1;
		while(l < r){   // 第一个>=res|w的位置
			int mid = (l+r)/2;
			if(a[mid] < (res|w)) l = mid+1;
			else r = mid;
		}
		if(n-r+1 >= m){
			res |= w;
		}
	}
	cout << res;
	return 0;
}