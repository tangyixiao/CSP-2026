#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << '1';
	else{
		cout << "0000";
		return 0;
	}
	
	if(s1.substr(0, 2) == s2.substr(0, 2))
		cout << '1';
	else{
		cout << "000";
		retrun 0;
	}
	
	if(s1.substr(0, 2) == s2.substr(0, 2) && (s1[2] <= 'C' && s2[2] <= 'C' || s1[2] >= 'D' && s2[2] >= 'D'))
		cout << '1';
	else{
		cout << "00";
		return 0;
	}
	
	if(abs(s1[2] - s2[2]) == 1) cout << '1';
	else cout << '0';
	
	return 0;
}
