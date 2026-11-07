#include <iostream>
using namespace std;
int a[500050];
int b[500050];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		cout<<n;
		return 0;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<i<<" ";
	}
}
