#include<bits/stdc++.h>
using namespace std;
const long long N=1e10+5;
long long a[N];
long long b[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,c=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			b[c++]=a[i]^a[j];
		}
	}
	sort(b+c,b);
	cout<<b[1];
	return 0;
}
