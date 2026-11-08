#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cout<<i<<" ";
	}
	return 0;
}
