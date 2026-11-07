#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	map<char, int> mp;
	mp['A'] = 1;
	mp['B'] = 1;
	mp['C'] = 1;
	mp['D'] = 2;
	mp['F'] = 2;
	string c1, s1, c2, s2;
	int a, b, c, d;
	cin >> c1 >> s1 >> c2 >> s2;
	a = (c1 == c2) ? 1 : 0;
	b = (s1[0] == s2[0] && s1[1] == s2[1] && a == 1) ? 1 : 0;
	c = (b == 1 && mp[s1[2]] == mp[s2[2]]) ? 1 : 0;
	if(c == 1){
		if((mp[s1[2]] == 2) || (abs((s1[2] - '0') - (s2[2] - '0')) == 1)) d = 1;
		else d = 0;
	}
	else d = 0;
	cout << a << b << c << d;
	return 0;
} 
