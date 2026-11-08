#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
	}
	if(n <= 5 && m <= 2)
	{
		vector<int> num(m,0);
		bool nots = true;
		for(int i = 0;i < n;i++)
		{
			for(int j = i + 1;j < n;j++)
			{
				if(a[j] != a[i])
				{
					nots = false;
					break;
				}
			}
			if(! nots)
			{
				num[0]++;
				num[1]++;
			}
			else
				num[a[i]]++;
		}
		cout<<num[0]<<' '<<num[1];
		return 0;
	}
	return 0;
} 
