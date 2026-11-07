#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a [ 200005 ];
char c [ 200005 ];
signed main()
{
	freopen ( "string.in","r",stdin );
	freopen ( "string.out","w",stdout );
	cin >> n;
	for ( int i = 1;i <= n;i++ )
		cin >> a [ i ] >> c [ i ];
	int l = 1,r = n;
	int ans = 0;
	while ( l <= r )
	{
		if ( a [ l ] <= 0 )
			l++;
		if ( a [ r ] <= 0 )
			r--;
		int p = min ( a [ l ],a [ r ] );
		if ( c [ l ] != c [ r ] )
			ans += p;
		a [ l ] -= p;
		if ( a [ r ] > 0 )
			a [ r ] -= p;
	}
	cout << ans;
	return 0;
}