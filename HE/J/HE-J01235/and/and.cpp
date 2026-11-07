#include <bits/stdc++.h>
using namespace std;
long long n,m,zz;
long long  a[20000];
int main()
{
	freopen("and.in","r" ,stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>zz;
	a[0]=zz;
	for(int i=2;i<=n;i++)
	{
		cin>>zz;
		a[i]=zz;
	
	}
	long long maxn=-9;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]&a[j]>=maxn)
			{
				maxn=a[i]&a[j];
			}
		}
	} 
	cout<<a[n];
}
