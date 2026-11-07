#include <bits/stdc++.h>
using namespace std;
bool check1(string s1, string s2)
{
	for(int i = 0; i < 2; i++)
	{
		if(s1[i]!=s2[i])
		{
			return 0;
		}
	}
	return 1;
}
bool check2(string s1,string s2)
{
	if(s1[2] == 'D')
	{
		if(s2[2]=='F')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'F')
	{
		if(s2[2]=='D')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'A')
	{
		if(s2[2]=='B'||s2[2]=='C')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'B')
	{
		if(s2[2]=='A'||s2[2]=='C')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'C')
	{
		if(s2[2]=='A'||s2[2]=='B')
		{
			return 1;
		}
		return 0;
	}
}
bool check3(string s1,string s2)
{
	if(s1[2] == 'D')
	{
		if(s2[2]=='F')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'F')
	{
		if(s2[2]=='D')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'A')
	{
		if(s2[2]=='B')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'B')
	{
		if(s2[2]=='A'||s2[2]=='C')
		{
			return 1;
		}
		return 0;
	}
	if(s1[2] == 'C')
	{
		if(s2[2]=='B')
		{
			return 1;
		}
		return 0;
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2>> s2;
	if(c1==c2) cout << "1";
	else
	{
		cout << "0000";
		return 0;
	}
	if(check1(s1,s2))
	{
		cout << "1";
	}
	else
	{
		cout <<"000";
		return 0;
	}
	if(check2(s1,s2))
	{
		cout << "1";
	}
	else
	{
		cout << "00";
		return 0;
	}
	if(check3(s1,s2))
	{
		cout <<"1";
	}
	else
	{
		cout <<"0";
	}
	return 0;	
} 
