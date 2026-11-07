#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200020
struct kuai
{
	char z;
	int s;
}a[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int w = 0;
	for(int i = 1;i <= n;i++)
	{
		char zimu;
		int num;
		cin >> num >> zimu;
		if(zimu == a[w].z && w != 0)
		{
			a[w].s += num;
		}
		else
		{
			w++;
			a[w].z = zimu;
			a[w].s = num;
		}
	}	
	int l = 1;
	int r = w;
	int cnt = 0;
	while(l != r)
	{
		if(a[l].z != a[r].z)
		{
			if(a[l].s > a[r].s)
			{
				cnt += a[r].s;
				a[l].s -= a[r].s;
				r--;
			}
			else if(a[l].s < a[r].s)
			{
				cnt += a[l].s;
				a[r].s -= a[l].s;
				l++;
			}
			else
			{
				cnt += a[r].s;
				l++;
				r--;
			}
		}
		else
		{
			if(a[l].s > a[r].s)
			{
				a[l].s -= a[r].s;
				r--;
			}
			else if(a[l].s < a[r].s)
			{
				a[r].s -= a[l].s;
				l++;
			}
			else
			{
				l++;
				r--;
			}
		}
	}
	cout << cnt;
	return 0;
}
