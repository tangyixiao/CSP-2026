#include<bits/stdc++.h>
using namespace std;
char s1[105],s2[105],s3[105],s4[105];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s %s %s %s",s1+1,s2+1,s3+1,s4+1);
	if(strcmp(s1+1,s3+1)!=0)
	{
		printf("0000\n");
	}
	else if(s2[1]!=s4[1]||s2[2]!=s4[2])
	{
		printf("1000\n");
	}
	else if((s2[3]>'C'&&s4[3]<='C')||(s2[3]<='C'&&s4[3]>'C'))
        {
                printf("1100\n");
        }
	else if((s2[3]=='C'&&s4[3]=='A')||(s2[3]=='A'&&s4[3]=='C'))
	{
		printf("1110\n");
	}
	else
	{
		printf("1111\n");
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
