#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n, kn = 1, jn;
long long k = 1, j, ans, hik, hij, zc;
pair <long long, char> a[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	jn = n;
	for (int i = 1; i <= n; i ++){
	cin >> a[i].first >> a[i].second;
	j += a[i].first;
	}
	zc = j;
	while (k < j) {
		long long len = min (a[kn].first + hik - k + 1, a[jn].first + hij - zc + j);
		if (a[kn].second != a[jn].second) ans += len;
		if (a[kn].first + hik - k + 1 > a[jn].first + hij - zc + j){
			hij += a[jn].first;
			jn --;
		}
		else if (a[kn].first + hik - k + 1 < a[jn].first + hij - zc + j){
			hik += a[kn].first;
			kn ++;
		}
		else {
			hij += a[jn].first;
			jn --;
			hik += a[kn].first;
			kn ++;
		}
		k += len;
		j -= len;
	}
	cout << ans;
	return 0;
}
