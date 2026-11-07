#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a[500005];
	int n,m,t=0;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n/2;i++) t+=a[i];
	cout<<t<<" ";
	cout<<a[0]<<" ";
	cout<<a[n-1]+a[n-2];
	return 0;  
}
