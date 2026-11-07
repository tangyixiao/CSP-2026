#include <bits/stdc++.h>
using namespace std;
int c1,c2,n1,n2;
char s1,s2;
bool ucd = true,uc = true,un = true;
int main()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin >> c1 >> n1 >> s1 >> c2 >> n2 >> s2;
	if (c1 == c2)
	{
		cout << "1";
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if (n1 == n2)
	{
		cout << "1";
	}
	else
	{
		cout << "000";
		return 0;
	}
	if ((s2 <= 'C' && s1 <= 'C') || (s2 >= 'D' && s1 >= 'D'))
	{
		cout << "1";
	}
	else
	{
		cout << "00";
		return 0;
	}
	if((s1 - s2 == 1 || s2 - s1 == 1) && ucd)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	return 0;
} 
