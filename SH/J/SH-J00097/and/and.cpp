#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define int long long
const int maxn = 2e5 + 5;
int n, m, a[maxn], p2[33];
int mx = 0, mj;
bool cmp(int x, int y){
	int c1 = (x & (1 << mj));
	int c2 = (y & (1 << mj));
	
//	cout << c1 << ' ' << c2 << '\n';
	
	return c1 <= c2;
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	p2[0] = 1ll;
	for(int i = 1; i <= 30; i++) p2[i] = p2[i - 1] * 2;
	
//	printf("OK\n");
	
	cin >> n >> m;
	
//	for(int i = 1; i <= n; i++) cout << a[i] << ' ' << i << '\n';
//	cout << '\n';
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
//		cout << a[i] << ' ' << a[i + 1] << '\n';
	}
	
//	printf("OK2\n");
	
	
	int ans = 0, lim = 1; mj = 30;
	while(mj >= 0){
		sort(a + lim, a + n + 1, cmp);
		int l = lim, r = n, pos = n + 1;
		while(l <= r){
			int mid = (l + r) >> 1;
			if(a[mid] & (1 << mj)) pos = mid, r = mid - 1;
			else l = mid + 1;
		}
		
		if(n - pos + 1 >= m) lim = pos, ans += (1 << mj);
		mj--;
//		printf("l:%d, r:%d, pos:%d, mj:%d\n", l, r, pos, mj);
	}
	
	cout << ans << '\n';
	return 0;
}
