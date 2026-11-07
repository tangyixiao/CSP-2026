#include <bits/stdc++.h>
using namespace std;
int n, ans;
string s = " ";
long long len = 0;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i ++){
		int a;
		char c;
		cin >> a;
		cin >> c;
		for (int i = 1; i <= a; i ++)s += c;
		len += a;
	}
	double mid = len * 1.0 / 2;
	//cout << s << " " << len << " " << mid << endl;
	for (long long i = len; i >= ceil(mid); i --){
		//cout << s[i] << " " << s[len - i + 1] << endl;
		if (s[i] != s[len - i + 1]) ans ++;
	}
	cout << ans;
	return 0;
}
