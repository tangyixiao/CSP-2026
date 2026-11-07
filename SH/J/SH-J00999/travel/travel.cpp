#include<bits/stdc++.h>
using namespace std;
bool panduan(char a)
{
	if(a == 'A' || a == 'B' || a == 'C')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin >> r1 >> r2 >> x1 >> x2;
	if(r1 == x1)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if(r2[0] == x2[0] && r2[1] == x2[1])
	{
		cout << 1;
	}
	else
	{
		cout << "000";
		return 0;
	}
	bool f = 0;
	if(panduan(r2[2]) == panduan(x2[2]))
	{
		cout << 1;
		f = 1;
	}
	else
	{
		cout << 0;
	}
	if(f)
	{
		if(panduan(r2[2]) == 0)
		{
			cout << 1;
		}
		else if((r2[2] == 'A' && x2[2] == 'C') || (r2[2] == 'C' && x2[2] == 'A'))
		{
			cout << 0;
		}
		else
		{
			cout << 1;
		}
	}
	else
	{
		cout << 0;
	}
	return 0;
}
