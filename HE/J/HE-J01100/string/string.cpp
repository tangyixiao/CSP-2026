#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e6 + 10;
ll T;
ll x[N];
char s[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> T;
	ll cnt = 0;
	for(ll i = 0;i < T;++i)
	{
		cin >> x[i] >> s[i];
		cnt += x[i];	
	}
	if(T <= 1){cout << 0;return 0;}
	if((T % 2 != 0 && x[0] == x[T - 1] && s[0] == s[T - 1]) || (T % 2 == 0 && s[0] == s[T - 1])){cout << 0;return 0;}
	else if(T % 2 != 0)cout << (cnt - 1) / 2;
	else if(T % 2 == 0)cout << cnt / 2;
	return 0;
 } 
