#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, ans = 0, af = 0;
	string s;
	cin >> n;
	for(int i = 1;i <= n;i++){
		int a;
		char c;
		cin >> a >> c;
		for(int j = 1;j <= a;j++){
			s += c;
		}
	}
	int f = s.size();
	if(f % 2 != 0) af = f / 2 + 1;
	else af = f / 2;
	for(int i = 0;i < af;i++){
		if(s[f - i - 1] != s[i]) ans++;
	}
	cout << ans;
	return 0;
}

