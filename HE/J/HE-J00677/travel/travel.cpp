#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		string u="",o="";
		u+=s1[0];u+=s1[1];
		o+=s2[0];o+=s2[1];
		char p=s1[2],i=s2[2];
		cout<<1;
		if(u==o)
		{
			cout<<1;
			if((s1[2]>='A' and s1[2]<='C' and s2[2]>='A' and s2[2]<='C') or (s2[2]>'C' and s2[2]<='F' and s1[2]<='F' and s1[2]>'C'))
			{
				cout<<1;
				if(abs(p-i)==1)
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
