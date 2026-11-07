#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[200005];
char b[200005];
int x[200005][2],y[200005][2];
long long ans=0;
int cnt=0,num=0,t1=0,t2=0,r;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		num+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(cnt+a[i]<=num/2) x[++t1][0]=a[i],x[t1][1]=b[i]-'a';
		else x[++t1][0]=num/2-cnt,x[t1][1]=b[i]-'a';
		cnt+=x[t1][0];
		if(cnt>=num/2) break;
	}
	cnt=0;
	for(int i=n;i>=1;i--)
	{
		if(cnt+a[i]<=num/2) y[++t2][0]=a[i],y[t2][1]=b[i]-'a';
		else y[++t2][0]=num/2-cnt,y[t2][1]=b[i]-'a';
		cnt+=y[t2][0];
		if(cnt>=num/2) break;
	}
	int cnt1=0,cnt2=0;
	r=1;
	for(int i=1;i<=t1;i++)
	{
		cnt1+=x[i][0];
		while(cnt2+y[r][0]<=cnt1) 
		{
			if(y[r][1]!=x[i][1]) ans+=y[r][0];
			cnt2+=y[r][0];
			r++;
		}
		if(cnt2<cnt1)
		{
			if(y[r][1]!=x[i][1]) ans+=(cnt1-cnt2);
			y[r][0]-=(cnt1-cnt2);
			cnt2+=(cnt1-cnt2);
		}
	}
	cout<<ans;
	return 0;
} 