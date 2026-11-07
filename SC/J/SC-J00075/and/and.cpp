#include<bits/stdc++.h>
using namespace std;
long long a[2000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1);
	long long ans;
	for(int i = m;i>=1;i--)
	{
		if(a[i]%2 !=0)
		{
			ans == a[i];
			if(i ==m)
			{
				a[i] = a[i-1];
			}
			else
			{
				a[i] = a[i+1];
			}
			break;
		}
	}
	for(int i =m-1;i>=1;i--)
	{
		ans = ans | a[i];
	} 
	cout<<ans;
	return 0;
}