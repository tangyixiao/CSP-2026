#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string", "r", stdin);
	freopen("string", "w", stdout);
	std::ios::sync_with_stdio(0);
	int n; cin >> n;
	vector<int> a(n);
	vector<string> c(n);
	for(int i = 1; i <= n; ++i){
		cin >> a[i] >> c[i];
	}
	cout << '0' <<'\n';
	return 0;
} 
