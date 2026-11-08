#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5 + 5;
ll num1[N] , num[N];
char s1[N] , s[N];
int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> num[i] >> s[i];
		num1[n - i + 1] = num[i];
		s1[n - i + 1] = s[i];
	}
	for(int i = 1;i <= n;i++)
	{
		num[i] += num[i - 1];
		num1[i] += num1[i - 1];
	}
	ll x = 1 , y = 1;
	ll ans = 0 , lx = 0 , ly = 0;
	while(x <= n and y <= n)
	{
		while(s[x] == s1[y])
		{
			if(num[x] < num1[y])
			{
				ly = num[x];
				lx = num[x++];
			}
			else if(num[x] > num1[y])
			{
				lx = num1[y];
				ly = num1[y++];
			}
			else
			{
				lx = num[x++];
				ly = num1[y++];
			}
		}
		while(s[x] != s1[y])
		{
			if(num[x] < num1[y])
			{
				ly = num[x];
				ans += abs(ly - lx);
				lx = num[x++];
			}
			else if(num[x] > num1[y])
			{
				lx = num1[y];
				ans += abs(ly - lx);
				ly = num1[y++];
			}
			else
			{
				ans += min(num[x] - lx , num1[y] - ly);
				lx = num[x++];
				ly = num1[y++];
			}
		}
	}
	if(ans % 2 == 0) ans /= 2;
	else ans = ans / 2 + 1;
	cout << ans;
	return 0;
}
