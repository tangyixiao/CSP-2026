#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a1 = s1[0]*10 + s1[1]; 
	int a2 = s2[0]*10 + s2[1]; 
	if(c1 == c2)
	{
		cout << "1";
	}
	else
	{
		cout << "0000";
		return 0;
	}
	
	if(a1 == a2)
	{
		cout << "1";
	}
	else
	{
		cout << "000";
		return 0;
	}
	
	if(s1[2] == 'A')
	{
		if(s2[2] == 'B')
		{
			cout << "11";
			return 0;
		}
		else if(s2[2] == 'C')
		{
			cout << "10";
			return 0;
		}
		else if(s2[2] == 'D' || s2[2] == 'F')
		{
			cout << "00";
			return 0;
		}
	}
	if(s1[2] == 'B')
	{
		if(s2[2] == 'A' || s2[2] == 'C')
		{
			cout << "11";
			return 0;
		}
		else if(s2[2] == 'D' || s2[2] == 'F')
		{
			cout << "00";
			return 0;
		}
	}
	if(s1[2] == 'C')
	{
		if(s2[2] == 'B')
		{
			cout << "11";
			return 0;
		}
		else if(s2[2] == 'A')
		{
			cout << "10";
			return 0;
		}
		else if(s2[2] == 'D' || s2[2] == 'F')
		{
			cout << "00";
			return 0;
		}
	}
	if(s1[2] == 'D')
	{
		if(s2[2] == 'F')
		{
			cout << "11";
			return 0;
		}
		else if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
		{
			cout << "00";
			return 0;
		}
	}
	if(s1[2] == 'F')
	{
		if(s2[2] == 'D')
		{
			cout << "11";
			return 0;
		}
		else if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
		{
			cout << "00";
			return 0;
		}
	}
 } 