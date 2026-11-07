#include<bits/stdc++.h>
using namespace std;
long long a[200500];
vector<long long>b;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	long long MAX=0;
	for(int i=1;i<=n-m+1;i++)
	{
		long long uuu=a[i];
		for(int j=i+1;j<=m;j++)
		{
			uuu&=a[i+1];
		}
		b.push_back(uuu);
	}
	sort(b.begin(),b.end());
	long long zuihou=b.size()-1;
	cout<<b[zuihou];
	return 0;
}