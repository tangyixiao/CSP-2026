#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define maxn 1000005
#define SIZE 1<<14
using namespace std;
int read()
{
	int x=0,f=1,ac=getchar();
	if(ac=='-')f=-1;
	while(!isdigit(ac)){if(ac=='-')f=-1;ac=getchar();}
	while(isdigit(ac)){x=x*10+ac-'0';ac=getchar();}
	return x*f;
}
int buf[SIZE];
void write(int x,char ac,int f)
{
	if(x==0){putchar('0');return;}
	if(x<0)x=-x,putchar('-');
	else 
	{
		int p=0;
		while(x)buf[++p]=x%10,x/=10;
		for(int i=p;i>=1;i--)putchar(buf[i]+'0');
	}
	if(f)putchar(ac);
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)write(1,'\n',0);
	else write(0,'\n',0);
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])write(1,'\n',0);
	else write(0,'\n',0);
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		if((s1[2]=='D'&&s2[2]=='F')||(s1[2]<='C'&&s1[2]>='A'&&s2[2]>='A'&&s2[2]<='C'))write(1,'\n',0);
		else write(0,'\n',0);
		if((s1[2]=='D'&&s2[2]=='F')||(s1[2]<='C'&&s1[2]>='A'&&s2[2]>='A'&&s2[2]<='C'&&(s1[2]+1==s2[2]||s1[2]==s2[2]+1)))write(1,'\n',0);
		else write(0,'\n',0);
	}
	else {write(0,'\n',0),write(0,'\n',0);}
	return 0;
}