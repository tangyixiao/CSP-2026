#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200005],is[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		is[i] = 1;
	}
	int ans = 0;
	for(int j = 30;j >= 0;j--){
		int cnt = 0;
		for(int i = 1;i <= n;i++){
			if(((1<<j)&a[i]) && is[i] == 1) cnt++;
		}
		if(cnt >= m){
			ans += (1<<j);
			for(int i = 1;i <= n;i++){
				if(((1<<j)&a[i]) == 0) is[i] = 0;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}
