#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n , x , num[200005] , cnt , ans , mx;
char ch , c[200005];
signed main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> x >> ch;
		if(ch == c[cnt])
		{
			num[cnt] += x;
		}
		else
		{
			cnt++;
			num[cnt] = x , c[cnt] = ch;
		}
	}
	int l = 1 , r = cnt;
	while(l < r)
	{
		mx = min(num[l] , num[r]);
		if(c[l] != c[r])
		{
			ans += mx;
		}
		num[l] -= mx;
		num[r] -= mx;
		if(num[l] == 0) l++;
		if(num[r] == 0) r--;
	}
	cout << ans;
	return 0;
}