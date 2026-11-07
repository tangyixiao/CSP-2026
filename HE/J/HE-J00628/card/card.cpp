#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	int n,m,a[1901],c=0;
	queue<int> q;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		c=a[i];
		cout<<c;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
