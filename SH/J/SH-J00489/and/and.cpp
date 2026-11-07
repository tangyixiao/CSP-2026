#include <bits/stdc++.h>
using namespace std;

int n,m;
long long a[200005];
vector <long long> ans;

bool cmp(int x,int y)
{
	return x>y;
}

int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 30;i>=0;i--)
	{
		ans.clear();
		long long sum=0;
		for(int j = 1;j<=n;j++)
		{
			if((a[j]>>i)&1)
			{
				ans.push_back(a[j]);
			}
		}
		if(ans.size()>=m)
		{
			sort(ans.begin(),ans.end(),cmp);
			for(int j = 0;j<m;j++)
			{
//				cout << ans[j]<<' ';
				if(sum==0)
				{
					sum=ans[j];
				}
				else
				{
					sum&=ans[j];
				}
			}
			cout << sum;
			return 0;
		}
	}
	cout << 0;
	return 0;
}

