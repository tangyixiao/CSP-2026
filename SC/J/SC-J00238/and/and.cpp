#include<bits/stdc++.h>
using namespace std;
int n,m,a[1500005]; 
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
	int sum=n-m+1;
	cout<<a[sum];
	return 0;
}