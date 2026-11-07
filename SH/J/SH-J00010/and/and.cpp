//and
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool nums[40][200005];
bool avail[200005];
int main(){
	memset(avail, 1, sizeof(avail));
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ll n, m, tmp;
	cin >> n >> m;
	int maxn = 0;
	for (int i=1;i<=n;i++){
		cin >> tmp;
		for (int j=0;j<40;j++){
//			cout << ((1 << j) & tmp) << endl;
			if ((1ll << j) & tmp){
				nums[j][i] = true;
				maxn = max(maxn, j);
			}
//			cout << nums[j][i] << endl;
		}
	}
//	cout << maxn << endl;
	ll ans = 0;
	for (int i=maxn;i>=0;i--){
		ll sum = 0;
		for (int j=1;j<=n;j++){
			sum += nums[i][j] && avail[j];
		}
		if (sum >= m){
			for (int j=1;j<=n;j++){
				avail[j] = nums[i][j] && avail[j];
			}
			ans += 1 << i ;
		}
	}
	cout << ans << endl;
}

