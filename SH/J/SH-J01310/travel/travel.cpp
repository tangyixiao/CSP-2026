#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	
	
	string tmp1 = "";
	tmp1 += s1[0];
	tmp1 += s1[1];
	string tmp2 = "";
	tmp2 += s2[0];
	tmp2 += s2[1];
	if(tmp1 == tmp2)
	{
		cout << 1;
	}
	else
	{
		cout << "000";
		return 0;
	}
	
	
	
	bool flag1 = 0,flag2 = 0;
	if('A' <= s1[2] && s1[2] <= 'C')
	{
		flag1 = 0;
	}
	else
	{
		flag1 = 1;
	}
	if('A' <= s2[2] && s2[2] <= 'C')
	{
		flag2 = 0;
	}
	else
	{
		flag2 = 1;
	}
	
	
	if(flag1 == flag2)
	{
		cout << 1;
	}
	else
	{
		cout << "00";
		return 0;
	}
	
	if((s1[2] == 'A' && s2[2] == 'C')  || (s1[2] == 'C' && s2[2] == 'A'))
	{
		cout << 0;
	}
	else
	{
		cout << 1;
	}
	return 0;
}
