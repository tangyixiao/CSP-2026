#include<bits/stdc++.h>
using namespace std;
long long maxn=-1000000000,n,m,a[200001];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n,m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
