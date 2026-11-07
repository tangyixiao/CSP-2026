#include <bits/stdc++.h>
#include <string>
using namespace std;
int s1[5],s2[5];
int main ()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2)
		cout << 1;
	else
	{
		cout << 0000;
		return 0;
	}
	for (int i=0;i<s1.size()-1;i++)
	{
		s1[i]=s1[i]-'0';
		s2[i]=s2[i]-'0';
	}
	if (s1[1]+s1[0]==s2[1]+s2[0])
		cout << 1;
	else
	{
		cout << 000;	
		return 0;
	}
	bool s1r=0,s2r=0;
	if (s2[2]=='D'||s2[2]=='F')
		s2r==1;
	if (s1[2]=='D'||s1[2]=='F')
		s1r==1;
	if (s1r==s2r)
		cout << 1;
	else
	{
		cout << 00;
		return 0;		
	}
	if (s1[2]+1==s2[2]||s1[2]-1==s2[2])
		cout << 1;
	else
		cout << 0;
	return 0;
 } 