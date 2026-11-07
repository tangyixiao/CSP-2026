#include <bits/stdc++.h>
using namespace std;

unsigned long long n,k[200001];
char c[200001],empty;
unsigned long long sum = 0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)cin >> k[i] >> c[i];
	int l = 1,r = n;
	while(l < r)
	{
		if(c[l] != c[r])sum += min(k[l],k[r]);
		if(k[l] < k[r])
		{
			k[r] -= k[l];
			++l;
		}
		else if(k[l] > k[r])
		{
			k[l] -= k[r];
			--r;
		}
		else
		{
			++l;
			--r;
		}
	}
	cout << sum;
	return 0;
}
