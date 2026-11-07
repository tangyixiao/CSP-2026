#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int n,maxa;
int a[MAXN];
char c[MAXN],c1[100000005];
string s;
void solve1()
{
	int l=0,r=0,cnt=0;
	for(int i=1;i<=n;i++)
	{
		l=r+1,r+=a[i];
		for(int j=l;j<=r;j++)
		{
			c1[j]=c[i];
			cnt++;
		}
	}
	int ans=0;
	for(int i=1;i<=cnt/2;i++)
		if(c1[i]!=c1[cnt+1-i])ans++;
	cout<<ans;
	return;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++)maxa=max(a[i],maxa);
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	if(n==2)
	{
		if(c[1]==c[2])cout<<"0";
		else cout<<min(a[1],a[2]);
		return 0;
	}
	if(maxa*n<=100000000)solve1();
	return 0;
}
