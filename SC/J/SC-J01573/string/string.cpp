#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	int n , cnt = 0, sum = 0; cin >> n;
	string s;
	while(n--){
		int num; char c;
		cin >> num >> c;
		while(num--){
			cnt++;
			s = s + c;
		}
	}
	int j = cnt % 2;
	int b = cnt / 2;
	for(int i = b + j; i <= cnt - 1; ++i){
		if(s[i] != s[cnt - 1 - i])sum++;
	}
	cout << sum << endl;
	return 0;
}