#include <iostream>
using namespace std;
int c[200005];
int f[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
		f[c[i]]=i;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<f[i]<<"\n";
	}
	return 0;
}
