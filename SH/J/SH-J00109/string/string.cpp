#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int main (){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	// ios::sync_with_stdio(false); cin.tie(nullptr);
	int n; cin >> n; string s = "";
	for(int i = 0; i < n; i ++){
		int a; char c;
		cin >> a >> c;
		for(int i = 0; i < a; i ++){
			s += c;
		}
	}
	for(int i = 0; i < s.size() / 2; i ++){
		if(s[i] != s[s.size() - i - 1]){
			ans ++;
		}
	}
	cout << ans << "\n";
	return 0;
}
