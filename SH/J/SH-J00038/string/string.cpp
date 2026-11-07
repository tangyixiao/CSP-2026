#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int a[200010];
char c[200010];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum = 0,ans = 0;
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i] >> c[i];
	sum /= 2;
	for(int i = 1,j = n,now = 1,last1 = a[1],last2 = a[n];i < j;)
	{
		if(c[i] != c[j]) ans += min(last1,last2);
		if(last1 < last2)
		{
			last2 -= last1;
			last1 = a[++i];
		}
		else if(last1 == last2)
		{
			last1 = a[++i];
			last2 = a[--j];
		}
		else
		{
			last1 -= last2;
			last2 = a[--j];
		}
	}
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
