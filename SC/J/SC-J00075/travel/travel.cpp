#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	string n;
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2)
	{
		n +="1";
	}
	else
	{
		n += "0";
	}
	
	if(s1[0] == s2[0] && s1[1] == s2[1]&& (n[0] == '1'))
	{
		n += "1";
	}
	else
	{
		n += "0";
	}
	
	char s1t = s1[2];
	char s2t = s2[2];
	if((s1t == 'D' || s1t == 'F') &&  (s2t == 'D' || s2t == 'F') && (n[1] == '1'))
	{
		n += "1";
	}
	else if((s1t == 'A' || s1t == 'B' || s1t == 'C') && (s2t == 'A' || s2t == 'B' || s2t == 'C')&& (n[1] == '1'))
	{
		n += "1";
	}
	else
	{
		n += "0";
	}
	
	if(((s1t == 'D' && s2t == 'F') ||  (s2t == 'D' && s1t == 'F'))&& (n[2] == '1'))
	{
		n += "1";
	}
	else if(((s1t == 'A' && s2t == 'B') || (s1t == 'B' && s2t == 'C') || (s1t == 'B' && s2t == 'A')|| (s1t == 'C' && s2t == 'B') )&& (n[2] == '1'))
	{
		n += "1";
	}	
	else
	{
		n += "0";
	}
	cout<<n;
	return 0;
}