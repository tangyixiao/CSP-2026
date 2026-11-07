#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[500010], t[300010], v[500010];
map<ll, ll> mp;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			t[a[j]] = v[j] = 0;
		}
		for(int j = i; j <= n; j++){
			if(t[a[j]]){
				for(int k = t[a[j]]; k < j; k++){
					t[a[k]] = 0;
					v[k] = 1;
				}
			}
			t[a[j]] = j;
		}
		for(int j = i; j <= n; j++){
			if(!v[j]){
				mp[a[j]]++;
			}
		}
	}
	for(int i = 1; i <= m; i++){
		cout << mp[i] << " ";
	}
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