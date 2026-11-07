#include<bits/stdc++.h>
using namespace std;
char s[10][5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("trevel.out","w",stdout);
	scanf("%s %s %s %s",s[1]+1,s[2]+1,s[3]+1,s[4]+1);
	//printf("111 %s %s %s %s",s[1]+1,s[2]+1,s[3]+1,s[4]+1);
	int i,flag=0,l1=strlen(s[1]+1);
	for(i=1;i<=l1;++i)
	{
		if(s[1][i]!=s[3][i])
			printf("0000"),flag=1;
	}
	if(!flag)
	{
		if(s[2][1]!=s[4][1]||s[2][2]!=s[4][2])
			printf("1000");
		else
		{
			if(min(s[2][3],s[4][3])<='C'&&max(s[2][3],s[4][3])>='D')
				printf("1100");
			else
			{
				if(abs(s[2][3]-s[4][3])==1)
					printf("1111");
				else
					printf("1110");
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
