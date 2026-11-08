#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int x=1,sa=1;
	int a;
	cin>>a;
	sa=a;
	for(int i=1;i<n;i++)
	{
		cin>>a;
		if(a!=sa)
		{
			cout<<x<<' ';
			x=1;
		}
		else x++;
	}
	cout<<x;
	return 0;
}
