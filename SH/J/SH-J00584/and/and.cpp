#include<bits/stdc++.h>
using namespace std;
int arr[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a,maxn=INT_MIN;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j) continue;
			a=arr[i]&arr[j];
			maxn=max(a,maxn);
		}
	}
	cout<<maxn;
	return 0;
}
