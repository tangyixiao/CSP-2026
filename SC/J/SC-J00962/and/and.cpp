#include <bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
struct shu
{
	long long x,cnt; 
} a[N];
long long s1(long long x)
{
	long long mul=1;
	while(x!=0)
	{
		mul*=2;
		x/=2;	
	}	
	return mul/2;
}
bool cmp(shu p,shu q)
{
	if(q.cnt!=p.cnt)
		return p.cnt>q.cnt;
	return p.x>q.x;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].x;
		a[i].cnt=s1(a[i].x);
	} 
	sort(a+1,a+n+1,cmp);
	long long ans=0;
	shu sum;
	sum.cnt=1;
	sum.x=1;
	for(int i=2;i<=n;i++)
	{
		if(a[i].cnt==a[i-1].cnt)
			sum.cnt++;
		else
		{
			if(sum.cnt>=m)
			{
				ans=a[sum.x].x;
				for (int j=sum.x+1;j<=sum.x+m-1;j++)
				{
					ans=ans&a[j].x;					
				}
				cout<<ans;
				return 0;
			}
			sum.cnt=1;
			sum.x=i;
		}	
	}
	if(sum.cnt>=m)
	{
		ans=a[sum.x].x;
		for (int j=sum.x+1;j<=sum.x+m-1;j++)
		{
			ans=ans&a[j].x;					
		}
		cout<<ans;
		return 0;
	}
	cout<<ans;
	return 0;
}