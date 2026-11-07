#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w", stdout);
	string s, si;
	long long n, m;
	cin >> n;
	while(n--){
		cin >> m >> si;
		for(int i = 1; i <= m; i++){
			s += si;
		}
	}
	long long ans = 0;
	for(int i = 0; i < s.size() / 2 + 1; i++){
		if(s[i] != s[s.size() - 1 - i]){
			s[s.size() - 1 - i] = s[i];
			ans++;
		}
	}
	cout << ans; 
	return 0;
}
