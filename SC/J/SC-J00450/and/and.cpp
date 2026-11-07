#include <bits/stdc++.h>
using namespace std;

long long n,m;
int a[100005];
int main()
{
	freopen("and.in ","r",stdin);
	freopen("and.out ","w",stdout);
	cin>>n>>m;
	if(n==1)
	{
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	
}