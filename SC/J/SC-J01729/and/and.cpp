#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> dp(200010);
ll n, m, a[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	dp[0] = 1073741823;
	for(int i = 1; i <= n; i++){
		for(int j = m; j >= 1; j--){
			dp[j] = max(dp[j], dp[j - 1] & a[i]);
		}
	}
	cout << dp[m];
	return 0;
} 
//.....................................................
//.RRRRRRRRRRR...PPPPPPPPPPP...........................
//.RR........RRR.PP........PPP......+...........+......
//.RR.........RR.PP.........PP......+...........+......
//.RR........RRR.PP........PPP......+...........+......
//.RRRRRRRRRRR...PPPPPPPPPPP...+++++++++++.+++++++++++.
//.RRRRRRR.......PP.................+...........+......
//.RR...RRRRR....PP.................+...........+......
//.RR......RRRRR.PP.................+...........+......
//.R.........RRR.PP....................................
//.....................................................