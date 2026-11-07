#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],vis[200005],ans[35],lo[32];
bool cmp(int x,int y){
	return x > y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	lo[0] = 1;
	for (int i = 1;i <= 31;i++){
		lo[i] = lo[i - 1] * 2;
	}
	sort(a + 1,a + n + 1,cmp);
	fill(vis + 1,vis + n + 1,1);
	for (int j = 30;j >= 0;j--){
		int cnt = 0;
		for (int i = 1;i <= n;i++){
			if (vis[i] == 0){
				continue;
			}
			if (a[i] & (1 << j)){
				cnt++;
			}
		}
		if (cnt >= m){
			for (int i = 1;i <= n;i++){
				if (a[i] & (1 << j)){
					
				}else{
					vis[i] = 0;
				}
			}
			ans[j] = 1;
		}
	}
	int tnt = 0;
	for (int j = 31;j >= 0;j--){
		if (ans[j] == 1){
			tnt += lo[j];
		}
	}
	cout << tnt << "\n";
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/