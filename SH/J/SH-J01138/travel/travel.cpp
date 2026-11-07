#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cc1,cc2,ss1,ss2;
	cin >> cc1 >> ss1 >> cc2 >> ss2;
	if(cc1 == cc2)
	{
		cout << "1";
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if(ss1[0] == ss2[0] && ss1[1] == ss2[1])
	{
		cout << "1";
	}
	else
	{
		cout << "000";
		return 0;
	}
	char a = ss1[2];
	char b = ss2[2];
	if((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C'))
	{
		cout << "1";
	}
	else if((a == 'D' || a == 'F') && (b == 'D' || b == 'F'))
	{
		cout << "1";
	}
	else
	{
		cout << "00";
		return 0;
	}
	if(b > a)
	{
		if((b - a) == 1)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	else
	{
		if((a - b) == 1)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	return 0;
}
