#include <bits/stdc++.h>
using namespace std;
long long a[100000005];
char b[100000005];
char c[100000005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "a", stdout);
	long long n, cnt = 1, k = 0, ans = 0, q;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> b[i];
		for (int j = k + 1; j <= k + a[i]; j ++) {
			c[j] = b[i];
		}
		k = k + a[i];
	}
	k -= 1;
	if(n == 1){
		cout<<0;
		return 0;
	}
	q = k;
	if(k % 2 == 0){
		k /= 2;
		cnt = 1;
		for (int i = k; i >= 1; i --){
			if(c[k] != c[k + cnt]) ans ++;
			cnt += 2;
		}
	}
	else{
		k /= 2;
		cnt = 0;
		for (int i = k; i >= 1; i --){
			if(c[k] != c[k + cnt]) ans ++;
			cnt += 2;
		}
	}
	cout << ans;
	return 0;
}
