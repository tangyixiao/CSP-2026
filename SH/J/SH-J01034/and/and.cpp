#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	sort(a,a+n);
	int ans=a[n-1];
	for(int i=1;i<m;i++)
	{
		ans&=a[n-1-i];
	}
	cout<<ans;
	return 0;
}
