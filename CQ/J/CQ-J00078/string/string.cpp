#include<iostream>
#include<iomanip> 
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n;long long ans = 0 , sum = 0 , tt = 0;
	cin >> n;
	vector<long long> t(n + 1);
	vector<char> f(n + 1);
	for (int i = 1;i <= n; ++i)
		cin >> t[i] >> f[i];
	for (int i = 1 , j = n;i < j;) {
		if (!t[j]) -- j;
		if (!t[i]) ++ i; 
		if (f[i] != f[j]) {
			ans += min(t[i],t[j]);
			if (t[i] > t[j]) t[i] -= t[j] , t[j] = 0;
			else t[j] -= t[i] , t[i] = 0;
		}else {
			if (t[i] < t[j]) t[j] -= t[i] , t[i] = 0;
			else if (t[j] < t[i]) t[i] -= t[j] ,t[j] = 0;
			else t[i] = 0 , t[j] = 0;
		}
	} 
	cout << ans << "\n";
	return 0; 
} 
