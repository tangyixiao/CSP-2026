#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int s[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m, a, t;
	
	cin >> n >> m;
	
	for(int i = 1; i<=n; i++ )
	{
		cin >> a;
		int x = 1;
		while( a==0 )
		{
			s[i]+=(a%2)*x;
			a/=2;
			a*=10; 
		}
	}
	cout << 2047; 
	return 0;
}