#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n, a, x = 0, t = 0;
	char c;
	string s[N]; 
	cin >> n;
	
	for(long long i = 1; i<=n; i++ )
	{
		cin >> a >> c;
		for(long long i = 1; i<=a; i++ )
		{
			s[++x] = c;
		}
	}
	long long y = x;
	for(long long i = 1; i<=(x+1)/2; i++ )
	{
		if( s[i]!=s[y] )	++t;
		--y;
	}
	
	
	cout << t;
	return 0;
}