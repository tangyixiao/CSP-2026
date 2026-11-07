#include<bits/stdc++.h>
using namespace std;
long long n;
long long ans;
long long cnt;
struct nb {
	long long b,e;
	char c;
}a[100005];
long long t;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i = 1;i <= n;i++) {
		long long x;
		char c;
		cin >> x >> c;
		a[t++] = {cnt + 1,cnt + x,c};
		cnt += x;
		
	}
	long long t2 = t - 1;
	t = 0;
	long long tx = 1;
	while(tx <= cnt / 2) {
		if (a[t].c != a[t2].c) ans += min(a[t].e - tx,(cnt - tx + 1) - a[t2].b) + 1;
		if (a[t].e - tx < (cnt - tx + 1) - a[t2].b) {
			tx = a[t + 1].b;
			t++;
		} else {
			tx = cnt + 1 - a[t2 - 1].e;
			t2--;
		}
		if (a[t].e == tx) t++;
		if (a[t2].b == cnt - tx + 1) t2--;
	}
	cout << ans;
	return 0;
}