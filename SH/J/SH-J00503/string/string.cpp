#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int a[N], sa[N];
char c[N], sc[N];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		sa[n + 1 - i] = a[i], sc[n + 1 - i] = c[i];
	}
	int set = 0, cnt = 0, sset = sa[1];
	for (int i = 1, j = 1; i <= n; i++){
		set += a[i];
		do{
			if (c[i] != sc[j]){
				cnt += min(abs(min(set, sset) - max(set- a[i], sset - sa[j])), abs(max(set, sset) - min(set- a[i], sset - sa[j])));
			}
			if (sset > set || j > n)break;
			if (sset <= set){
				j++;
				sset += sa[j];
			}
		}while (1);
	}
	cout << cnt / 2 << '\n';
	return 0;
}
