#include<bits/stdc++.h>
using namespace std;
char c[100005];
int a[100005];
long long ans,sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		cin >> c[i];
		sum+=a[i];
	}
	for(long long i=1;i<=sum/2;i++)
	{
		int l = 1,r = n;
		if(c[l] != c[r])
			ans++;
		a[l]--;
		a[r]--;
		if(a[l] == 0)
			l++;
		if(a[r] == 0)
			r--;
	}
	cout << ans;
	return 0;
}
