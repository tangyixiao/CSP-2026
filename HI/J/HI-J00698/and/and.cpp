#include<iostream> 
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[100];
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[n];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[0] >= a[m])
		{
			cout << a[0];
		}
	}
	return 0;
}
