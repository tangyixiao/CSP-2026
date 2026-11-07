#include<bits/stdc++.h>
using namespace std;
char c1[105],s1[105],c2[105],s2[105],ans[105];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s %s %s %s",c1,s1,c2,s2);
	if(strcmp(c1,c2)==0)
	{
		ans[0]='1';
		int t1=10*(s1[0]-'0')+(s1[1]-'0');
		int t2=10*(s2[0]-'0')+(s2[1]-'0');
		if(t1==t2)
		{
			ans[1]='1';
			if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')||(s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))
			{
				ans[2]='1';
				if(s1[2]>='A'&&s1[2]<='C')
				{
					if(abs(s1[2]-s2[2])==1)
						ans[3]='1';
					else
						ans[3]='0';
				}
				if(s1[2]=='D'||s1[2]=='F')
				{
					if(s1[2]!=s2[2])
						ans[3]='1';
					else
						ans[3]='0';
				}
			}
			else
				ans[2]=ans[3]='0';
		}
		else
			ans[1]=ans[2]=ans[3]='0';
	}
	else
		ans[0]=ans[1]=ans[2]=ans[3]='0';
	printf("%s",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
