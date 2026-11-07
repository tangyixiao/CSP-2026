#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long a[maxn];
bool cmp(long long a,long long b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1,cmp);
	long long ans=a[1]&a[2];
	for(int i=3;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans;
 } 