#include<bits/stdc++.h>
using namespace std;
int c,s,c1,s1,ans[5];
char ss,ss1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d%c%d%d%c",&c,&s,&ss,&c1,&s1,&ss1);
	if(c==c1)
	{
		ans[1]=1;
		if(s==s1)
		{
			ans[2]=1;
			if((ss>='D' and ss1>='D') or (ss<='C' and ss1<='C'))
			{
				ans[3]=1;
				if(ss+1==ss1 or ss1+1==ss)
					ans[4]=1;
			}
		}
	}
	for(int i=1;i<=4;i++)
		printf("%d",ans[i]);
	return 0;
}