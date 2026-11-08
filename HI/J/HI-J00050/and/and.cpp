#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5+5;

int n, m;
int a[N];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	
	int ans = 0;
	for(int bit=29;bit>=0;bit--){
		int tmp = ans|(1LL << bit);
		int cnt = 0;
		for(int i=1;i<=n;i++){
			if((a[i]&tmp)==tmp){
				cnt++;
			}
		} 
		if(cnt>=m) ans = tmp;
	} 
	cout << ans;
	return 0;
}
