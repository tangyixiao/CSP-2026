#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long  a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	int ans=0;
	for(int i=0;i<m-1;i++)
	{
		ans=a[i]&=a[i+1];
	}
	cout<<ans<<endl;
	return 0;
}
