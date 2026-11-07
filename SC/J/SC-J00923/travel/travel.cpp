#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0;
	string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;  
	for(int i=0;i<2;i++)
		if(s1[i]==s3[i]) a++;
	if(a==2) cout<<1;
	else cout<<0;
	a=0;
	for(int i=0;i<2;i++)
		if(s1[i]==s3[i]&&s2[i]==s4[i]) a++;
	if(a==2) cout<<1;
	else cout<<0;
	a=0;
	for(int i=0;i<2;i++)
	{
		if(s1[i]==s3[i]&&s2[i]==s4[i])
		{
			if(s2[2]=='A'&&s4[2]=='B'||s2[2]=='A'&&s4[2]=='C'||s2[2]=='B'&&s4[2]=='A'||s2[2]=='B'&&s4[2]=='C'||s2[2]=='C'&&s4[2]=='A'||s2[2]=='C'&&s4[2]=='B'||s2[2]=='D'&&s4[2]=='E'||s2[2]=='E'&&s4[2]=='D') a++;
		} 
	}  
	if(a==2) cout<<1;
	else cout<<0;
		a=0;
	for(int i=0;i<2;i++)
	{
		if(s1[i]==s3[i]&&s2[i]==s4[i])
		{
			if(s2[2]=='A'&&s4[2]=='B'||s2[2]=='B'&&s4[2]=='A'||s2[2]=='B'&&s4[2]=='C'||s2[2]=='C'&&s4[2]=='B'||s2[2]=='D'&&s4[2]=='E'||s2[2]=='E'&&s4[2]=='D') a++;
		} 
	}  
	if(a==2) cout<<1;
	else cout<<0;
	return 0;
}