#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+1;
struct node
{
	long long a;
	char s;
}u[MAXN];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,l,r,sum=0;
	cin>>n;
	l=1;
	r=n;
	for(int i=1;i<=n;i++)
	{
		cin>>u[i].a>>u[i].s;
	}
	while(l<r)
	{
		int minn=min(u[l].a,u[r].a);
		if(u[l].s==u[r].s)
		{
			u[l].a-=minn;
			u[r].a-=minn;
		}
		else
		{
			u[l].a-=minn;
			u[r].a-=minn;
			sum+=minn;
		}
		if(u[l].a==0)
		{
			l++;
		}
		if(u[r].a==0)
		{
			r--;
		}
	}
	cout<<sum;
	return 0;
}