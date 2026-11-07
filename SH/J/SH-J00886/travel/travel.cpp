#include<bits/stdc++.h>
using namespace std;
char s1[5],s2[5],s3[5],s4[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	scanf("%s %s %s %s",s1,s2,s3,s4);
	if(strcmp(s1,s3)==0) printf("1");
	else printf("0");
	if(strcmp(s1,s3)==0&&s2[0]==s4[0]&&s2[1]==s4[1]) printf("1");
	else printf("0");
	if(strcmp(s1,s3)==0&&s2[0]==s4[0]&&s2[1]==s4[1]&&((s2[2]<='C'&&s4[2]<='C')||(s2[2]>='D'&&s4[2]>='D'))) printf("1");
	else printf("0");
	if(strcmp(s1,s3)==0&&s2[0]==s4[0]&&s2[1]==s4[1]&&((s2[2]<='C'&&s4[2]<='C'&&abs(s2[2]-s4[2])<=1)||s2[2]>='D'&&s4[2]>='D')) printf("1");
	else printf("0");
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
