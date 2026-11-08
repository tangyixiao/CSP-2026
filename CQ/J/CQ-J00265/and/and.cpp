#include<bits/stdc++.h>
using namespace std;
long long n, m, ans;
vector<long long> a;
vector<long long> b;
int main(){
	ios::sync_with_stdio(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	a.resize(n);
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long fk = pow(2, 30);
	for (long long k = 30; k >= 0; k--) {
		long long ct = 0;
		for (long long i = 0; i < a.size(); i++) {
			if (a[i] >= fk) {
				ct++;
			}
		}
		if (ct >= m) {
		//	cout << fk << " " << ct << endl;
			ans = ans + fk;
			for (long long i = 0; i < a.size(); i++) {
				if (a[i] >= fk) {
		//			cout << a[i] << " ";
					b.push_back(a[i] - fk);
				}
			}
			a = b;
			b.clear();
		} else {
			for (long long i = 0; i < a.size(); i++) {
				if (a[i] >= fk) {
					a[i] = a[i] - fk;
				}
			}
		}
		fk = fk / 2;
	}
//	for (long long i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//	int a1 = 524288, b1 = 262144;
//	a1 &= b1; 
//	cout << a1 << endl;
	cout << ans;
	return 0;
}

