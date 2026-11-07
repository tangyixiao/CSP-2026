#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a,c;
	string b,d;
	cin >> a >> b >> c >> d;
	
	if (a != c)
	{
		cout << "0000";
		return 0;
	}
	if (b[0] == d[0] && b[1] == d[1])
	{
		char m = b[2],n = d[2];
		if (m > n) swap(m,n);
		if ((m-'C')*(n-'D') <= 0)
		{
			cout << "1100";
			return 0;
		}
		if((m=='A'&&n=='B')||(m=='B'&&n=='C')||(m=='D'&&n=='F'))
		{
			cout << "1111";
		}
		else
		{
			cout << "1110";
		}
	}
	else
	{
		cout << "1000";
	}
	
	return 0;
} 
