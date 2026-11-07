#include <bits/stdc++.h>
using namespace std;

long long a[200050];
char b[200050];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	unsigned long long PP=0;
	for (long long i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i];
		PP+=a[i];
	}
	long long cnt=1;
	long long i=1,j=n;
	long long ans=0;
	while (cnt<=PP/2)
	{
		if (a[i]==0)
		{
			i++;
		}
		if (a[j]==0)
		{
			j--;
		}
		if (b[i]!=b[j])
		{
			ans++;
		}
		a[i]--;a[j]--;
		cnt++;
	}
	cout << ans;
	return 0;
}
