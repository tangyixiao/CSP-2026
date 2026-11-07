#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string s1_p = "",s2_p = "";
	for(int i = 1;i < 2;i++) {
		s1_p += s1[i];
		s2_p += s2[i];
	}
	char s1_w = s1[2],s2_w = s2[2];
	if(c1 == "01" || c1 == "16" || c2 == "01" || c2 == "16") {
		cout << "0000";
		return 0;
	}
	if(c1 != c2) {
		cout << "0000";
		return 0;
	}
	if(s1_p != s2_p) {
		cout << "1000";
		return 0;
	}
	if(s1_w > s2_w) {
		swap(s1_w,s2_w);
	}
	if(s2_w == 'F') {
		s2_w = 'E';
	}
	if(s1_w <= 'C' && s2_w >= 'D') {
		cout << "1100";
		return 0;
	}
	if(s2_w - s1_w > 1) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}
