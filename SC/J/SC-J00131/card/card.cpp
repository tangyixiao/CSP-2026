#include<bits/stdc++.h>
using namespace std;
int a[500020];
int sum;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n,m; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>a[i-1])
		sum++;
	}
	if(sum==n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<n-i+1<<" ";
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<' ';
	}
	return 0;
}