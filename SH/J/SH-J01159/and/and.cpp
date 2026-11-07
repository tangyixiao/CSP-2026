#include <bits/stdc++.h>
using namespace std;
int n,m,a[100011],d;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	//for(int i=1;i<=n;i++)
	//{
	//	cout<<a[i]<<endl;
	//}
	for(int i=1;i<=n-m+1;i++)
	{
		int x=2^32-1;
		for(int j=0;j<m;j++)
		{
			x&=a[i+j];
		}
		d=max(x,d);
	}
	cout<<d;
	return 0;
}
