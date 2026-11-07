#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	long long a[200005] = {0};
	cin >> n >> m;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	long long maxn = -1;
	for (int i = 0;i < n - m;i++) 
	{
		for (int j = i + m - 1;j < n;j++)
		{
			long long cnt = a[i];
			long long num = 1;
			for (int k = i + 1;k < j;k++)
			{
				cnt &= a[k];
				num++;
				if (num == m)
				{
					if (cnt > maxn)
					{
						maxn = cnt;
					}
					cnt = a[i];
					num = 1;
				}
			}
		}
	}
	cout << maxn;
	return 0;
}
