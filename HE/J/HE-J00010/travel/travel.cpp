#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2; 
	char chs1 = s1[2];
	char chs2 = s2[2];
	int its1 = (s1[0]-'0')*10 + (s1[1]-'0');
	int its2 = (s2[0]-'0')*10 + (s2[1]-'0');
	bool left1 = (chs1 == 'A' || chs1 == 'B' || chs1 == 'C');
	bool left2 = (chs2 == 'A' || chs2 == 'B' || chs2 == 'C');
	if (c1 == c2) cout << 1; else {
		cout << "0000";
		return 0;}
	if (its1 == its2) cout << 1; else {
		cout << "000";
		return 0;}
	if (left1 == left2) cout << 1; else {
		cout << "00";
		return 0;}
	if (abs(chs1 - chs2) == 1) cout << 1; else cout << 0;
	return 0;
} 
