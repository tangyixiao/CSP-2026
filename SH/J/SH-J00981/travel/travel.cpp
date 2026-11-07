#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	// 1
	if(c1 == c2)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	// 2
	string tmp1 = s1.substr(0,2);
	string tmp2 = s2.substr(0,2);
	if(tmp1 == tmp2)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	// 3
	char t1 = s1[2];
	char t2 = s2[2];
	if('D'<=t1&&t1<='F'&&'D'<=t2&&t2<='F')
	{
		cout << "11";
		return 0;
	}
	else if('A'<=t1&&t1<='C'&&'A'<=t2&&t2<='C')
	{
		cout << 1;
		if(abs(t2 - t1) == 1)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << "00";
	}
	return 0;
}
