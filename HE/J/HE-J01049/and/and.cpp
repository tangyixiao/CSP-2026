// and by A67dgt027FxdGT54 (luogu user 1417426)

#include <bits/stdc++.h>
using namespace std;
#define int long long // 10 year OI = GUNMU

// 01 bag? tle.
// sort? wa.

// where is the way? eat a mooncake first. delicious.

// xiebuxiaqule, geinimentingcaiyangba

// in fact, i forgot that i brought much food

// play maimai after csp-s.

// it is 9:51 now. time left 130 min.

/*




*/

int n, m, a[200005];
bool v[200005];

#define B(aI) ((a[(aI)] & (1 << bit))? 1: 0)


signed main(signed argc, const char* argv[]){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i], v[i] = 1;
	
	int ans = (1 << 30) - 1;
	for(int bit = 29; bit >= 0; bit--){
		int c = 0;
		for(int i=1;i<=n;i++){
			if(v[i])
				if(B(i)) c++;
		}
		if(c < m) continue;
		for(int i=1;i<=n;i++){
			if(v[i]) if(!B(i)) v[i] = 0;
		}
	}
	for(int i=1;i<=n;i++) if(v[i]) ans = ans & a[i];
	cout << ans;
	
	
	/*
	sort(a+1, a+n+1, [](const int& x, const int& y)->bool{return x > y;}); // wtf?
	
	for(int i=2;i<=m;i++){
		a[1] = a[1] & a[i];
	}
	cout << a[1];
	*/
}

/*

0011
1111
1100
1100


11111
00011
00001
01111
00111








*/

