#include<bits/stdc++.h>
using namespace std;
int m,n;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==n)
	{
		sort(a+1,a+n+1); 
		cout<<a[1];
		return 0;
	}
	if(m==1)
	{
		sort(a+1,a+n+1); 
		cout<<a[n];
		return 0;
	}
	sort(a+1,a+n+1);
	int s;
	for(int i=n;i>m;i--)
	{
		s=(a[i]&a[i-1]);
	}
	cout<<s;
	return 0;
}