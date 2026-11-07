#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int che1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	int che2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	int pai1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int pai2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	char wei1 = s1[2];
	char wei2 = s2[2];
	string ans;
	if (che1 != che2){
		ans = "0000";
		cout << ans;
		return 0;
	} else{
		ans += '1';
		if (pai1 != pai2){
			ans = "1000";
			cout << ans;
			return 0;
		} else{
			ans += '1';
			if (!((wei1 <= 'C' && wei2 <= 'C') || (wei1 >= 'D' && wei2 >= 'D'))){
				ans = "1100";
				cout << ans;
				return 0;
			} else{
				ans += '1';
				if (abs((int)(wei1 - wei2)) == 1){
					ans += '1';
					cout << ans;
					return 0;
				}
				cout << "1110";
			}
		}
	}
	return 0;
}
