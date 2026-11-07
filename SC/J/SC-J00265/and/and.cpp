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
int a[maxn],b[maxn];
int cnt(int x)
{
	int ans=0;
	while(x)ans+=x%2,x>>=1;
	return ans;
}
bool cmp(int a,int b)
{
	int cnta=cnt(a),cntb=cnt(b);
	if(cnta!=cntb)return (cnta>cntb);
	else return a>b;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n=read(),m=read();
	for(int i=1;i<=n;i++)b[i]=a[i]=read();
	sort(a+1,a+1+n,cmp);
	sort(b+1,b+1+n,greater<int>());
	for(int i=2;i<=m;i++)a[1]=(a[1]&a[i]);
	for(int i=2;i<=m;i++)b[1]=(b[1]&b[i]);
	write(max(a[1],b[1]),'\n',1);
	return 0;
}