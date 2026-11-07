#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
typedef long long ll;
const ll maxn = 2 * 1e5 + 10;
ll n;
ll sum;
char a[maxn];
ll k[maxn];
ll tot;
ll pre[maxn];
ll cnt; 
ll l, r;
ll l2, r2; 
/*
4
2 a
2 b
3 c
1 d
24104423
200pts!!!!!
*/
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k[i];
		cin >> a[i];
		tot += k[i];
		pre[i] = pre[i-1] + k[i];
	}
	tot = tot % 2 ? tot / 2 + 1 : tot / 2;
	while(pre[cnt] < tot) cnt++;
	l2 = 1; r2 = n;
	while(l2 <= r2) {
		ll minn = min(k[l2], k[r2]);
		//cout << l2 << " " << r2 << " ";
		//cout << k[l2] << " " << k[r2] << minn << " " << endl;
		if(a[l2] != a[r2]) {//Ò»ÂÉ»»ÓÒ±ß 
			sum += minn;
		}
		if (k[l2] > k[r2]) {
			r2--;
			k[l2] -= minn;
		}
		else if (k[l2] < k[r2]){
			l2++;
			k[r2] -= minn;
		}
		else if (k[l2] == k[r2]){
			l2++;
			r2--;
		}
	} 
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
