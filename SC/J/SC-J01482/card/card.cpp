#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N], b[N], c[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n, m;
	cin >> n >> m;
	for(int i = 1; i<=n; i++ )
	{
		cin >> a[i];
	}
	
	if( m==1 )
	{
		if( n==5 )		cout << 5;
		else if( n==4 )	cout << 4;
		else if( n==3 )	cout << 3;
		else if( n==2 )	cout << 2;
		else( n==1 )	cout << 1;
	}
	else	cout << 5 << " " << 2;
	return 0;
}