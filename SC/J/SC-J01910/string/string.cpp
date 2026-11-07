#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
int n;
int a[maxn];
char c[maxn];

void count(){
	int l = 1, r = n;
	long long ans = 0;
	while(l < r)
	{
		if(c[l] != c[r])
		{
			if(a[l] < a[r])
			{
				ans += a[l];
				a[r] -= a[l];
				++l;
			}
			else
			{
				if(a[l] == a[r])
				{
					ans += a[l];
					++l;
					--r; 
				}
				else
				{
					ans += a[r];
					a[l] -= a[r];
					--r; 
				}
			}
		}
		else
		{
			if(a[l] < a[r])
			{
				a[r] -= a[l];
				++l;
			}
			else
			{
				if(a[l] == a[r])
				{
					++l;
					--r;
				}
				else
				{
					a[l] -= a[r];
					--r;
				}
			}
		}
	}
	printf("%lld", ans);
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d %c", &a[i], &c[i]);	
	}
	count();
	return 0;
}