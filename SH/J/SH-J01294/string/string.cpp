#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s;
	long long cnt = 0;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a; j++){
			s += c;
		}
		cnt += a;
	}
	s = " " + s;
	long long ans = 0;
	for (int i = 1; i <= cnt - i + 1; i++){
		if (s[i] != s[cnt - i + 1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
