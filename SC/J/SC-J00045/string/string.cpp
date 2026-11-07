#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
long long ans;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i] >> c[i];
	int l = 1,r = n;
	while(l != r && l < r)
	{
		if(c[l] == c[r])
		{
			if(a[l] > a[r]){a[l] -= a[r];r--;}
			if(a[r] > a[l]){a[r] -= a[l];l++;}
			else {l++;r--;}
		}
		if(c[l] != c[r])
		{
			if(a[l] > a[r]){a[l] -= a[r];ans += a[r];r--;}
			if(a[r] > a[l]){a[r] -= a[l];ans += a[l];l++;}
			else {ans += a[l];l++;r--;}
		}
	}
	return cout << ans,0;
}