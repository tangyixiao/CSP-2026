#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n,m;
int a[N];
int ans;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=29; i>=0; i--){
		int cnt = 0;
		for(int j=1; j<=n; j++){
			if(a[j]&(1<<i)) cnt++;
		}
		if(cnt>=m){
			ans += (1<<i);
			cnt = 0;
			for(int j=1; j<=n; j++){
				if(a[j]&(1<<i)){
					a[++cnt] = a[j];
				}
			}
			n = cnt;
		}
	}
	cout << ans;
	return 0;
} 