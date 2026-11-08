#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int t[300010],t1[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> a;
	for(int i = 0;i < n;i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	for(int r = 0;r < n;r++)
	{
		memset(t1,-1,sizeof(t1));
		stack<int> s;
		for(int i = r;i < n;i++)
		{
			if(t1[a[i]] != -1)
			{
				int l = s.size();
				for(int j = t1[a[i]];j < l;j++)
				{
					t1[s.top()] = -1;
					s.pop();
				}
			}
			t1[a[i]] = s.size();
			s.push(a[i]);
		}
		for(int i = 1;i <= m;i++)
		{
			t[i] += t1[i] != -1;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << t[i] << ' ';
	}
	return 0;
}
