#include <iostream>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int max1=0;
	for(int i=1;i<=n;i++)
	{
		int d;
		cin>>d;
		max1=max(max1,d);
	}
	cout<<max1;
}
