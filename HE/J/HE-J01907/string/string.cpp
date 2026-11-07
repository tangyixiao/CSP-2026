#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
long long d(string &a, long long &c, bool e, long long f){
	string b = a;
	long long l = 0, r = a.size() - 1;
	while (l <= r){
		swap(b[l], b[r]);
		l++;
		r--;
	}
	if (b == a) return c;
	if (f > a.size()) return LONG_LONG_MAX;
	if (e){
		a[f] = b[f];
		c++;
	}
	return min(d(a, c, 0, f + 1), d(a, c, 1, f + 1));
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string a;
	cin >> n;
	for (long long i = 1; i <= n; i++){
		long long j;
		char k;
		cin >> j >> k;
		for ( ; j > 0; j--){
			a.push_back(k);
		}
	}
	long long c = 0;
	long long s = min(d(a, c, 0, 0), d(a, c, 1, 0));
	cout << s << endl;
	return 0;
}
