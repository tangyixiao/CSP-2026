#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
struct num
{
	int n;
	string c;
}a[N];
long long cnt;

int main()
{
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	
	int t;
	cin >> t;
	for(int i = 1;i <= t;i++)
	{
		cin >> a[i].n >> a[i].c;
	}
	int i = 1,j = t;
	while(i != j)
	{
		int tmp = a[i].n - a[j].n;
		if(tmp < 0)
		{
			i++;
			a[j].n = tmp;
			if(a[i].c != a[j].c)
			{
				cnt += a[i].n;
			}
		}
		else
		{
			j--;
			a[i].n = tmp;
			if(a[i].c != a[j].c)
			{
				cnt += a[j].n;
			}
		}	
	}
	
	cout << cnt;
return 0;
}
