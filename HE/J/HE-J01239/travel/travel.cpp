#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1, s2, s3, s4;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
			
	cin >> s1 >> s2 >> s3 >> s4;
	//车厢号、座位号  车厢号、座位号
	if (s1 == s3) cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	
	if (s2[0] == s4[0] && s2[1] == s4[1])
		cout << 1;
	else {
		cout<< "000";
		return 0;
	}
	
	if ((s2[2] <= 'C' && s4[2] <= 'C') || (s2[2] >= 'D' && s4[2] >= 'D'))
		cout << 1;
	else {
		cout << "00";
		return 0;	
	}
	
	int a = s2[2], b = s4[2];
	
	if (abs(a - b) == 1)
		cout << 1;
	else cout << 0;
	return 0;
}
