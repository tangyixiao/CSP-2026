#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int cx1 = 0, cx2 = 0;
	if(c1[0] == 0)	cx1 = int(c1[1] - '0'); 
	else	cx1 = int(c1[0] - '0') * 10 + int(c1[1] - '0');
	if(c2[0] == 0)	cx2 = int(c2[1] - '0'); 
	else	cx2 = int(c2[0] - '0') * 10 + int(c2[1] - '0');
	if(cx1 == cx2)	cout << 1;
	else
	{
		cout << "0000" << endl;
		return 0;
	 }
	int rowa = 0, rowb = 0;
	if(s1[0] == 0)	rowa = int(c1[1] - '0'); 
	else	rowa = int(s1[0] - '0') * 10 + int(s1[1] - '0');
	if(s2[0] == 0)	rowb = int(s2[1] - '0'); 
	else	rowb = int(s2[0] - '0') * 10 + int(s2[1] - '0');
	if(rowa == rowb)	cout << 1;
	else
	{
		cout << "000" << endl;
		return 0; 
	}
	char a = s1[2], b = s2[2];
	if(a == 'A' && b == 'B' || a == 'A' && b == 'C' || a == 'B' && b == 'A' || a == 'C' && b == 'A' || a == 'B' && b == 'C' || a == 'C' && b == 'B' || a == 'D' && b == 'F' || a == 'F' && b == 'D')
	{
		cout << 1;
	}
	else
	{
		cout << "00" << endl;
		return 0;
	}
	if(a == 'A' && b == 'B' || a == 'B' && b == 'A' || a == 'B' && b == 'C' || a == 'C' && b == 'B' || a == 'D' && b == 'F' || a == 'F' && b == 'D')
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
 } 
