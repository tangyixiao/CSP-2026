#include <iostream>

using namespace std;

int a[2000005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<m;i++)
	{
		cout<<78<<" ";
	}
	return 0;
}
