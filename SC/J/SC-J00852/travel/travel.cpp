#include <bits/stdc++.h>
using namespace std;

string ans,c1,s1,c2,s2;
int cc1,cc2,ss1,ss2,aa,bb;
char a,b;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	cc1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	cc2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	if(cc1 == cc2) 
		ans += '1';
	else 
	{
		cout << "0000";
		return 0;
	}
	
	ss1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	ss2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if(ss1 == ss2)
		ans += '1';
	else 
	{
		cout << "1000";
		return 0;
	}
	
	a = s1[2];
	b = s2[2];
	if(((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C')) || ((a == 'D' || a == 'F') && (b == 'D' || b == 'F')))
		ans += '1';
	else 
	{
		cout << "1100";
		return 0;
	}
	
	aa = a - 'A',bb = b - 'A';
	if(abs(aa - bb) == 1)
		ans += '1';
	else 
	{
		cout << "1110";
		return 0;
	}
	cout << ans;
	return 0;
}