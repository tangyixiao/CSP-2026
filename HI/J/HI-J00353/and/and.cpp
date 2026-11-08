#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 2;
long long n, m;
long long a[N];
long long sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	int t = 0;
	for (int i = 1; i <= n ;i++) {
		for (int j = 1; j <= i; j++) {
			t = i&j;
			sum = max(t, sum);
		}
	}
//	for (int i = 1; i <= n; i++) {
//		int t1 = 0;
//		while (a[i]) {
//			int t2 = pow(2, t1);
//			int t = a[i] % 10;
//			int t3 = t*t2;
//			s[i].push_back(t3);
//			a[i] /= 10;
//			t1++;
//		}
//	}
//	sum = a[n];
//	long long f[1000002];
//	for (int i = n; i >= 1; i--) {
//		for (int j = b[i].size()-1; j >= 0; j--) {
//			
//		}
//	}
	cout << sum;
	return 0;
}
