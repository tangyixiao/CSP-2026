#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
string c1,c2,l1,l2;
char s1[15],s2[15];
int len1,len2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
		len1=strlen(s1);
		len2=strlen(s2);
		for(int i=0;i<len1-1;i++)l1+=s1[i];
		for(int i=0;i<len2-1;i++)l2+=s2[i];
		if(l1==l2)
		{
			cout<<1;
			if((s1[len1-1]<='C'&&s2[len2-1]<='C')||(s1[len1-1]>'C'&&s2[len2-1]>'C'))
			{
				cout<<1;
				if(s1[len1-1]>'C'&&s2[len2-1]>'C')
				{
					cout<<1;
				}
				else
				{
					if(abs(s1[len1-1]-s2[len2-1])==1)cout<<1;
					else cout<<0;
				}
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}