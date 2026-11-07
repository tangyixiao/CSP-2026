#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
bool f,f1,f2,f3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>s2>>s3;
	if(s==s2)f=1;
	if(f==1)
	{
		if(s1[0]==s3[0]&&s1[1]==s3[1])
		{
			f1=1;f2=1;
			if(s1[2]=='C'&&s3[2]=='D')f2=0;
			if(s1[2]=='D'&&s3[2]=='C')f2=0;
		}
		if(abs(s1[2]-s3[2])==1&&f2==1)f3=1;
		if(s1[2]=='D'&&s3[2]=='F')f3=1;
		if(s1[2]=='F'&&s3[2]=='D')f3=1;
	}
	cout<<f<<f1<<f2<<f3;
	return 0;
 } 