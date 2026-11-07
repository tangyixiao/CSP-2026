#include <bits/stdc++.h>
using namespace std;
string s1,s2,r1,r2;
map <char,int> mp;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A'] = mp['B'] = mp['C'] = 1;
	mp['D'] = mp['F'] = 2;
	cin >> s1 >> s2 >> r1 >> r2;
	bool t1 = (s1 == r1),
	     t2 = (s2.substr(0,2) == r2.substr(0,2)),
	     t3 = (mp[s2[2]] == mp[r2[2]]),
	     t4 = (s2[2] == 'A' && (r2[2] == 'B')) || (s2[2] == 'B' && (r2[2] == 'A' || r2[2] == 'C')) || 
	          (s2[2] == 'C' && (r2[2] == 'B')) || (s2[2] == 'D' && r2[2] == 'F') || (s2[2] == 'F' && r2[2] == 'D');
	cout << t1 << (t1 && t2) << (t1 && t2 && t3) << (t1 && t2 && t3 && t4);
}
