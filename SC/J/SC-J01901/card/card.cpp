#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,b=1,maxn=-1;
	cin>> n>>m;
	long long k[999];
	
	long long a[9999],o[9999];
	
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];
		
		
	}
	a[0]=a[1];
	for (long long i=1;i<=m;i++)
	{
		k[a[i]]++;
	}
	cout<<maxn;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	return 0; 
}