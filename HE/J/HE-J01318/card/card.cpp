#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long m,n;
	cin >> m >> n;
	srand(time(0));
	long long ans = rand() % 100;
	cout << m << n << ans;
}
