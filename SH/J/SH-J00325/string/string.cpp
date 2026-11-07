#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
ll len = 0;

int a[200100];
char c[200100];

ll h[200100];

ll ans = 0;

ll findd(ll x){
	ll l = 1, r = n;
	ll an;
	while (l <= r){
		ll mid = l + (r - l) / 2;
		if (h[mid] >= x){
			an = mid;
			r = mid - 1;	
		}
		else{
			l = mid + 1;
		}
	}
	return an;
} 

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);	
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		cin >> c[i];
		len += a[i];
		h[i] = h[i - 1] + a[i];
	}
	
	ll m = len >> 1;
	int to;
	for (int i = 1; i <= n; i++){
		if (h[i] > m){
			to = i - 1;
			break;
		}
	}
	// st = h[i] - a[i] + 1, en = h[i]
	for (int i = 1; i <= to; i++){
		ll st = h[i] - a[i] + 1;
		ll en = h[i];
		// char c[i]
		ll toen = len - st + 1;
		ll tost = len - en + 1;
		ll f1 = findd(tost);
		ll f2 = findd(toen); 
		if (f1 != f2){
			for (int j = f2 - 1; j > f1; j--){
				if (c[j] != c[i]) ans += a[j];
			}
			if(c[f1] != c[i])ans += h[f1] - tost + 1;
			if (c[f2] != c[i])ans += toen - (h[f2] - a[f2] + 1) + 1;			
		}
		else{
			if (c[f1] != c[i]) ans += toen - tost + 1;
		}

	}
	if (h[to] != m){
	int i = to + 1;
	ll st = h[to + 1] - a[to + 1] + 1;
	ll en = m;
	ll toen = len - st + 1;
	ll tost = len - en + 1;
	ll f1 = findd(tost);
	ll f2 = findd(toen); 
	if (f1 != f2){
		for (int j = f2 - 1; j > f1; j--){
			if (c[j] != c[i]) ans += a[j];
		}
		if(c[f1] != c[i])ans += h[f1] - tost + 1;
		if (c[f2] != c[i])ans += toen - (h[f2] - a[f2] + 1) + 1;			
	}
	else{
		if (c[f1] != c[i]) ans += toen - tost + 1;
	}	}
	cout << ans << endl;
	return 0;
} 
