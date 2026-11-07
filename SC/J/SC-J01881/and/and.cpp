#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	cout<<a[m];
	return 0;
}