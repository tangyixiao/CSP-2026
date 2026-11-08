#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int f[200005];
int main()
{
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	int l = 1,r = 1;
	for (int i=1;i<=n;i++)
	{
		f[i] = max(f[i-1]&a[i],a[i]&a[i]);
	}
	
	cout<<f[n];
	
//	fclose(stdin);
//	fclose(stdout);
	
	return 0;
}
