#include<bits/stdc++.h>
using namespace std;
char s1[6],s2[6];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	scanf("%d %s %d %s",&a,s1,&b,s2);
	if(a!=b)
		printf("0000");
	else
	{
		printf("1");
		if((s1[0]-'0')*10+s1[1]-'0'!=(s2[0]-'0')*10+s2[1]-'0')
			printf("000");
		else
		{
			printf("1");
			if(s1[2]<='C'&&s2[2]>='D'||s1[2]>='D'&&s2[2]<='C')
				printf("00");
			else
			{
				printf("1");
				if(abs(s1[2]-s2[2])==1)
					printf("1");
				else
					printf("0");
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
