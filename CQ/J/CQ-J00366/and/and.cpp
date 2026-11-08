#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5 + 5;
int ans = 0;
vector<int> a(N , 0);
void dfs(vector<int> a , int s , int n , int m)
{
	vector<int> b;
	b.push_back(0);
	for(int i = s;i >= 0;i--)
	{
		int x = 1 << i , sum = 0;
		for(int j = 1;j <= n;j++)
			if(a[j] >= x) sum++;
		if(sum >= m)
		{
			if(sum == m)
			{
				int res , f = 0;
				for(int j = 2;j <= n;j++)
				{
					if(a[j] >= x and f) res &= a[j];
					if(a[j] >= x and !f)
					{
						f = 1;
						res = a[j];
					}
				}
				ans += res;
				return;
			}
			else
			{
				ans += x;
				for(int j = 1;j <= n;j++)
				{
					if(a[j] >= x) b.push_back(a[j] - x);
				}
				dfs(b , i - 1 , b.size() - 1 , m);
			}
			break;
		}
		for(int j = 1;j <= n;j++)
		    if(a[j] >= x) a[j] -= x;
	}
	return;
}
int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	dfs(a , 30 , n , m);
	cout << ans;
	return 0;
}
