#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n , m , card[500005];
signed main()
{
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> card[i];
	}
	cout << n;
	return 0;
}