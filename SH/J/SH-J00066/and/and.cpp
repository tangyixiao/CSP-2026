#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 4e6 + 5;
int n,m,a[N],ans,unava[N];
int idx;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 31;i >= 0;i--){
		int cnt = 0;
		for(int j = 1;j <= n;j++){
			if(!unava[j] && (a[j] >> i & 1)) cnt++;
		}
		if(cnt >= m){
			for(int j = 1;j <= n;j++){
				if(!(a[j] >> i & 1)) unava[j] = 1;
			}
			ans += (1 << i);
		}
	}
	cout << ans;
	return 0;
}

