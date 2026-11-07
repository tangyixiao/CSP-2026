#include <iostream>
#include <string>
using namespace std;
int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	int k=a[m];
	for(int i=m;i>=m-n;i--)
	{
		k=k&a[i];
	}
	cout<<k;
}
