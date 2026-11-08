#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=s1.size()-1;
	int b=s2.size()-1;
	int num[10000];
	
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			if(c1!=c2)
			{
				num[0]=0;
				num[1]=0;
				num[2]=0;
				num[3]=0;
			}
			else if(s1[a]-1==s2[b]-1&&s1[a]!='D'&&s1[a]!='C'&&s2[b]!='D'&&s2[b]!='C')
			{
				num[0]=1;
				num[1]=1;
				num[2]=1;
				num[3]=0;
			}
			else if(s1[1]!=s2[1])
			{
				num[0]=1;
				num[1]=0;
				num[2]=0;
				num[3]=0;
			}
			else if((s1[a]+1==s2[b]||s1[a]-1==s2[b])&&s1[a]!='C'&&s1[a]!='D'&&s2[b]!='C'&&s2[b]!='D')
			{
				num[0]=1;
				num[1]=1;
				num[2]=1;
				num[3]=1;
		    }
			else if((s1[a]=='C'||s1[a]=='D')&&(s2[b]=='C'||s2[b]=='D'))
			{
				num[0]=1;
				num[1]=1;
				num[2]=0;
				num[3]=0;
			}
		}   
	}
	cout<<num[0]<<num[1]<<num[2]<<num[3]; 
	return 0;
}
