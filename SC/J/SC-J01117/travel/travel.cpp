#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2 ? 1:0);
	cout<<(c1==c2 && s1.substr(0,2)==s2.substr(0,2) ? 1:0);
	if(c1==c2 && s1.substr(0,2)==s2.substr(0,2))
	{
		if((s1[2]<='C' && s2[2]<='C') || (s1[2]>'C' && s2[2]>'C'))
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	else cout<<0;
	if(c1==c2)
	{
		if(s1.substr(0,2)==s2.substr(0,2) && abs(s1[2]-s2[2])==1 && !(s1[2]=='D' && s2[2]=='C') && !(s2[2]=='D' && s1[2]=='C'))
		{
			cout<<1;
		}
		else
		{
			int n1 = 0,n2 = 0;
			for(int i = 0;i<2;i++)
			{
				n1 = n1*10+s1[i]-'0';
				n2 = n2*10+s2[i]-'0';
			}
			if(s1[2]==s2[2] && abs(n1-n2)==1)cout<<1;
			else cout<<0;
		}
	}
	else cout<<0;
	return 0;
}