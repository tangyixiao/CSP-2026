#include<bits/stdc++.h>
using namespace std;
int c1,c2;
char s1[10],s2[10];
int g[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==01||c1==16&&c2==01||c2==16)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		if(c1==c2)
		{
			g[0]=1;
			if(s1[0]*10+s1[1]==s2[0]*10+s2[1])
			{
				g[1]=1;
				if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
				{
					g[2]=1;
					if(s1[2]+1==s2[2]||s1[2]-1==s2[2])
					{
						g[3]=1;
					}
				}
				else if((s1[2]>='D'&&s1[2]<='F'&&s1[2]!='E')&&(s2[2]>='D'&&s2[2]<='F'&&s2[2]!='E'))
				{
					g[2]=1;
					if(s1[2]+2==s2[2]||s1[2]-2==s2[2])
					{
						g[3]=1;
					}
				}
			}
		}
	}
	
	for(int i=0;i<=3;i++)
	{
		cout<<g[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
