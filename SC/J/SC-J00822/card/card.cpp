#include<bits/stdc++.h> 
using namespace std;

const int N = 5e5+10;
const int M = 3e5+10;
int n,m;
int a[N],t[M],num[M],ans[M];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int k = 1;k <= n;k++)
	{
		for(int i = 1;i <= m;i++) t[i] = 0;
		for(int i = k;i <= n;i++)
		{
			if(t[a[i]] == 0) 
				{
				t[a[i]]++;
				num[a[i]] = i;
			}
			else
			{
				for(int j = num[a[i]];j < i;j++)
				{
					t[a[j]] = 0;
				}
				t[a[i]]++;
				num[a[i]] = i;
			}
		}
		for(int i = 1;i <= m;i++) ans[i] += t[i];
	}
	for(int i = 1;i <= m;i++) cout << ans[i] << " ";
	return 0;
}