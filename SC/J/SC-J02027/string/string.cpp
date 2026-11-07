#include<bits/stdc++.h>
using namespace std;
int n, ans = 0;
string s, s1, s2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long l = 0;
	for(int i = 1; i <= n; i++){
		int a;
		char c;
		cin >> a >> c;
		s = s + string(a, c);
		l += a;
	}
	if(l % 2){
		s1 = s.substr(0, l / 2);
		s2 = s.substr(l / 2 + 1, l / 2);
	}else{
		s1 = s.substr(0, l / 2);
		s2 = s.substr(l / 2, l / 2);
	}
	for(int i = 0; i < s.size() / 2; i++){
		if(s1[i] != s2[s2.size() - i - 1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}