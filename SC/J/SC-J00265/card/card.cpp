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
int n,m,a[maxn],ans[maxn],nxt[maxn];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++)a[i]=read(),nxt[a[i]]=i;
	for(int i=1;i<=n;i++)
	{
		int id=i;
		while(id<=n)
		{
			id=nxt[a[id]];
			ans[a[id]]++;
			id++;
		}
	}
	for(int i=1;i<=m;i++)write(ans[i],' ',i!=m);
	return 0;
}