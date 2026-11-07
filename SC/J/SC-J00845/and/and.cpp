#include<bits/stdc++.h>
using namespace std;


vector<long long>a;
bool cmp(long long q, long long b) {
	return q  > b;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n, m;
	cin >> n >> m;
	for(long long i = 1;i <= n; ++i) {
		long long x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end(), cmp);
	long long ma = a[0];
	for(long long i = 1;i < m; ++i) {
		ma &= a[i];
	}
	cout << ma;
	return 0;
} 