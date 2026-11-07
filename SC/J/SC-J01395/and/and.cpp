#include<bits/stdc++.h>
using namespace std;
int a[200005];
string binn[200005];
bool flag[200005];
string dtob(int x){
	string bin = "";
	while(x){
		bin += (x % 2) + '0';
		x /= 2;
	}
	for(int i = int(bin.size());i <= 32;i++) bin += '0';
	return bin;
}
signed main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n , m , ans = -1 , len = 0;cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		binn[i] = dtob(a[i]);
		len = max(len , int(binn[i].size()));
	}
	//cout << len << "\n";
	//for(int i = 1;i <= n;i++) cout << binn[i] << " ";
	for(int i = len - 1;i >= 0;i--){
		int cnt = 0;
		for(int j = 1;j <= n;j++) if(binn[j][i] == '1' && flag[j] == 0) cnt++;
		if(cnt < m) continue;
		for(int j = 1;j <= n;j++) if(binn[j][i] == '0') flag[j] = 1;
	}
	//for(int i = 1;i <= n;i++) cout << flag[i] << " ";
	int cnt = 0;
	for(int i = 1;i <= n;i++){
		if(flag[i] != 1 && cnt <= m){
			if(ans == -1) ans = a[i];
			else ans &= a[i];
			cnt++;
		}
	}
	cout << ans << "\n";
}