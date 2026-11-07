#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define maxn 1000005
#define SIZE 1<<14
#define teto ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
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
char s[maxn];
int q[30],h[30],vis[30];
int x[maxn],isq[maxn],ish[maxn];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	teto
	int n,len=0,ax=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>x[i]>>s[i],len+=x[i],ax=max(ax,x[i]);
	int j1=len/2ll,j2=len/2ll+(len%2ll),cur=0;
	for(int i=1;i<=n;i++)
	{
		int id=s[i]-'a'+1;
		if(cur+x[i]<=j1)q[id]+=x[i],isq[i]=1;
		else if(cur<=j1&&cur+x[i]>j2)q[id]+=j1-cur,h[id]+=cur+x[i]-j2,isq[i]=ish[i]=1;
		else if(cur>=j2)h[id]+=x[i],ish[i]=1;
		cur+=x[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int id=s[i]-'a'+1;
		if(!vis[id])ans+=abs(h[id]-q[id]),vis[id]=1;
	}
//	ans=j1-ax;
	cout<<ans/2<<endl;
	return 0;
}