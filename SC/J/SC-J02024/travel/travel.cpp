#include<bits/stdc++.h>
#define int long long
using namespace std;
char x;
bool xx[10];
int aabs(int x,int y){return ((x-y)<0) ? y-x : x-y;}
bool check(char jjpc,char yypc)
{
	int j=jjpc-'A'+1,y=yypc-'A'+1,xx[5],cnt=0;
	memset(xx,0,sizeof xx);
	xx[j]=xx[y]=true;
	for(int i=1;i<=5;i++)
	{
		if(xx[i]) cnt^=1;
		if(cnt) xx[i]=true;
	}
	if(aabs(j,y)>2 || (xx[3] && xx[4])) return false;
	else return true;
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x_1,x_2,y_1,y_2;
	cin>>x_1>>x_2>>y_1>>y_2;
	int jc=(x_1[0]-'0')*10+(x_1[1]-'0'),yc=(y_1[0]-'0')*10+(y_1[1]-'0'),jpc=(x_2[0]-'0')*10+(x_2[1]-'0'),ypc=(y_2[0]-'0')*10+(y_2[1]-'0');
	if(jc==yc)
	{
		printf("1");
		if(jpc==ypc)
		{
			printf("1");
			if(check(x_2[2],y_2[2]))
			{
				printf("1");
				if(aabs(x_2[2]-'A',y_2[2]-'A') == 1) puts("1");
				else puts("0");
			}
			else puts("00");
		}	
		else puts("000");
	}
	else puts("0000");
	fclose(stdin);
	fclose(stdout);
	return 0;
}