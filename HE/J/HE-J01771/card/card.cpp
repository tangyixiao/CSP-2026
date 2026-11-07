#include<bits/stdc++.h>
using namespace std;

int m,n,a[100];

int main()
{
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	cin >> m >> n;
	for(int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}
	cout << m << n << a[1];
    return 0;	
}
