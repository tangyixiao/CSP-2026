#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<'0'<<'0'<<'0'<<'0';
		return 0;
	}
	else
	{
		cout<<'1';
	}
	for(int i = 0;i<2;i++)
	{
		if(b[i] != d[i])
		{
			cout<<'0'<<'0'<<'0';
			return 0;
		}
	}
	cout<<'1';
	char k = b[2],p = d[2];
	if((k>='A'&&k<='C'&&p>='A'&&p<='C')||(k=='D'&&p=='F')||(k=='F'&&p=='D'))
	{
		cout<<'1';
	}
	else
	{
		cout<<'0'<<'0';
		return 0;
	}
	if((k=='A'&&p=='B')||(k=='B'&&p=='A')||(k=='B'&&p=='C')||(k=='D'&&p=='F'))
	{
		cout<<'1';
		return 0;
	} 
	else
	{
		cout<<'0';
		return 0;
	}
	return 0;
} 
