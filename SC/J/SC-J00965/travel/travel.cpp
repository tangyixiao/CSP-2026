#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		int l1 = (s1[0]-'0')*10+(s1[1]-'0');
		int l2 = (s2[0]-'0')*10+(s2[1]-'0');
		if (l1 == l2) {
			if (s1[2] <= 'C' && s2[2] <= 'C'){
				if (abs(s1[2]-s2[2]) == 1) cout << "1111";
				else cout << "1110";
			} else if (s1[2] >= 'D' && s2[2] >= 'D'){
				cout << "1111";
			} else cout << "1100";
		} else cout << "1000";
	} else cout << "0000";
	return 0;
}