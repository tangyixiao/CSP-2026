#include<bits/stdc++.h> 
using namespace std;
long long n,sum,ans;
struct node
{
	long long a;char c;
}p[200005],p1[200005],p2[200005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i].a>>p[i].c;
	}
	for(int i=1;i<=n;i++)
	{
		sum+=p[i].a;
		p1[i]={sum,p[i].c};
	}
	sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=p[n-i+1].a;
		p2[i]={sum,p[n-i+1].c};
	}
	long long cnt1=0,cnt2=0,pos=0;
	while(cnt1<=n&&cnt2<=n)
	{
		if(p1[cnt1].c!=p2[cnt2].c)
			ans+=min(p1[cnt1].a,p2[cnt2].a)-pos;
		pos=min(p1[cnt1].a,p2[cnt2].a);
		if(p1[cnt1].a==p2[cnt2].a)
			{cnt1++;cnt2++;}
		else if(p1[cnt1].a>p2[cnt2].a)
			cnt2++;
		else cnt1++;
	}
	cout<<ans/2;
	return 0;
 } 
 
 

