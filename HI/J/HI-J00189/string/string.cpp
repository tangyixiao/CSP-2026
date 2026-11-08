#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n;
long long a[N];
char s[N];
long long ans = 0, sum = 0;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i ++) 
	{
		cin >> a[i] >> s[i];
		sum += a[i];
	}
	long long l = 0, r = sum + 1, x = 0, y = 0;
	int i = 0, j = n+1;
	while(l<r)
	{
		if (l == sum-r+1)
		{
			i ++; j --;
			l += a[i];
			r -= a[j];
			x = a[i];
			y = a[j];
		}
		else
		{
			if (l < sum-r+1)
		    {
		    	y = (sum-r+1) - l;
		    	i ++;
		    	l += a[i];
		    	x = a[i];	
		    }
		    else
		    {
		    	if (l > sum-r+1)
		        {
		        	x = l - (sum-r+1);
		        	j --;
		        	r -= a[j];
		        	y = a[j];
	        	}
			}
		}
		if (i == j || l >= r) break;
		if (s[i] != s[j]) ans += min(x, y);
	}
	cout << ans;
	return 0;
}
