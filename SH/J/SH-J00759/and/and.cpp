#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,a[2005],max1=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		max1=max(max1,a[i]);
	}
	cout<<max1;
	return 0;
}
	
	
