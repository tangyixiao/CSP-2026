#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+14;
int n, num[N], ans;
char c[N];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> num[i] >> c[i];
	}
	int r = n;
	for(int l = 1; l <= n; l ++){
		if(num[l]==0) break;
		while(num[l]>0){
			if(num[l]>=num[r]){
				num[l]-=num[r];
				if(c[l]!=c[r]) ans += num[r];
				num[r] = 0;
				r --;
			}else{
				num[r]-=num[l];
				if(c[l]!=c[r]) ans += num[l];
				num[l] = 0;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
