#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string l1,l2;
	string s1,s2;
	cin >> l1 >> s1 >> l2 >> s2;
	string a1,a2;
	for (int i = 0;i < 2;i ++) {
		a1.push_back(s1[i]);
	}
	for (int i = 0;i < 2;i ++) {
		a2.push_back(s2[i]);
	}
	//cout << a1 << " " << a2 << "\n";
	
	if (l1 == l2) {
		cout << 1;
		if (a1 == a2) {
			cout << 1;
			if (s1[s1.size()-1] >= 'A' && s1[s1.size()-1] <= 'C' && s2[s2.size()-1] >= 'A' && s2[s2.size()-1] <= 'C' ||
			s1[s1.size()-1] >= 'D' && s1[s1.size()-1] <= 'E' && s2[s2.size()-1] >= 'D' && s2[s2.size()-1] <= 'E'){
				cout << 1;
				if (s1[s1.size()-1] - s2[s2.size()-1] == 1 || s1[s1.size()-1] - s2[s2.size()-1] == -1) cout << 1;
				else cout << '0';
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
