#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int flag;
int a[4],b[4],f[4];
int main()
{
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	cin>>s1>>s2>>s3>>s4;
 	for(int i=0;i<s2.size();i++)
 	{
 		if(s2[i]>='A'&&s2[i]<='F')
 		{
 			a[i]=s2[i]-'A'+1;
		}
		
		else
		{
			a[i]=s2[i]-'0';
		}
	}
	for(int i=0;i<s4.size();i++)
	{
		if(s4[i]>='A'&&s4[i]<='F')
		{
			b[i]=s4[i]-'A'+1;
		}
		else
		{
			b[i]=s4[i]-'0';
		}
	}
	for(int i=0;i<=1;i++)
	{
		if(s1[i]!=s3[i]) 
		{
			flag=1;
			break;
		}
	}
	if(!flag) f[0]=1;
	if(f[0]&&s2[0]==s4[0]&&s2[1]==s4[1]) f[1]=1;
	if(f[1]&&((s2[2]<='C'&&s4[2]<='C')||(s2[2]>'C'&&s4[2]>'C'))) f[2]=1;
	if(f[2]&&(a[2]==b[2]+1||a[2]==b[2]-1)) f[3]=1;
	for(int i=0;i<=3;i++) cout <<f[i];
 	return 0;
}