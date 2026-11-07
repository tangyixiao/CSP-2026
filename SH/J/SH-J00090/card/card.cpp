#include<bits/stdc++.h>
using namespace std;

const int _ = 5e5 + 9;
int n, m, a[_];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	for(int i = 1;i <= m;i++)
		if(i == a[n])
			cout << n << ' ';
		else
			cout << 0 << ' ';
	
	return 0;
}
