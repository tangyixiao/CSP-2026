#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a1[200010], a2[200010], ans;
char c1[200010], c2[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int j = 1, i = 1; j <= n; j++){
		cin >> a1[i] >> c1[i];
		if(c1[i] == c1[i - 1]){
			a1[i - 1] += a1[i];
			i--;
		}
		i++;
	}
	for(int i = n; i >= 1; i--){
		a2[i] = a1[n - i + 1];
		c2[i] = c1[n - i + 1];
	}
	ll l = 1, r = 1;
	while(l <= n && r <= n){
		if(a1[l] > a2[r]){
			if(c1[l] != c2[r]){
				ans += a2[r];
			}
			a1[l] -= a2[r];
			a2[r] = 0;
			r++;
		}
		else{
			if(c2[r] != c1[l]){
				ans += a1[l];
			}
			a2[r] -= a1[l];
			a1[l] = 0;
			l++;
		}
	}
	cout << ans / 2;
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