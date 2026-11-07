#include<bits/stdc++.h>
using namespace std;
struct node{
	char c;
	int s;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].s>>a[i].c;
		sum+=a[i].s;
	}
	sum/=2;
	long long ans=0,num=0;
	long long l=1,r=n;
	while(l<=r)
	{
		if(a[l].c!=a[r].c)
		{
			if(a[l].s<a[r].s)
			{
				ans+=a[l].s;
				num+=a[l].s;
				a[r].s-=a[l].s;
				l++;
			}
			else if(a[l].s>a[r].s)
			{
				ans+=a[r].s;
				num+=a[r].s;
				a[l].s-=a[r].s;
				r--;
			}
			else
			{
				ans+=a[l].s;
				num+=a[l].s;
				l++;
				r--;
			}
		}
		else
		{
			if(a[l].s<a[r].s)
			{
				num+=a[l].s;
				a[r].s-=a[l].s;
				l++;
			}
			else if(a[l].s>a[r].s)
			{
				num+=a[r].s;
				a[l].s-=a[r].s;
				r--;
			}
			else
			{
				num+=a[l].s;
				l++;
				r--;
			}
		}
		if(num>=sum)break;
	}
	cout<<ans;
	return 0;
}