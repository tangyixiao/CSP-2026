#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;

int n,m;
int a[N];

int main()
{
	freopen("card.in", "r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=m;i++)	cout<<a[i]<<' ';
	return 0;
} 	 	