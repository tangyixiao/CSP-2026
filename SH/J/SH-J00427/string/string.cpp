#include <bits/stdc++.h>
#define int long long
#define u first
#define v second
using namespace std;

const int maxn = 2e5 + 5;
pair <int, char> a[maxn];
int n, ans;

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i].u >> a[i].v;
	}
	for (int i = 1, j = n; i < j; ){
		int tmp = min(a[i].u, a[j].u);
		if (a[i].v != a[j].v){
			ans += tmp;
		}
		a[i].u -= tmp, a[j].u -= tmp;
		if (a[i].u == 0){
			i++;
		}
		if (a[j].u == 0){
			j--;
		}
	}
	cout << ans;
	return 0;
}
