#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn=1073741824-1,mm=-1,mmm=-1;
long long a[100005],er[10000];
const long long N=1073741824-1;
bool cmp(long long x,long long y)
{
	if(x%2==0)return x<y;
	if(y%2==0)return y<x;
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	int q=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=maxn&a[i];
		mm=max(mm,a[i]);
		if(a[i]%2==0)mmm=max(mmm,a[i]);
	}
	if(m==n)
	{
		maxn=a[1]&a[2];
		for(int i=3;i<=n;i++)maxn&=a[i];
		cout<<maxn;
		return 0;
	}
	if(m==1)
	{
		cout<<mm;
		return 0;
	}
	if(m==n-1)
	{
		long long x=1073741824-1;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==mmm)
			{
				continue;
				mmm=-12345783;
			}
			x&=a[i];
		}
		cout<<x;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int mmmm=N;
	for(int i=1;i<=m;i++)
	{
		mmmm&=a[i];
	}
	cout<<mmmm;
	return 0;
 } 
