#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	vector<int>ans(m+1,0);
	
	for(int i = 0;i<n;++i)
	{
		cin>>a[i];
	}
	
	vector<int> step;
	
	for(int i = 0;i<n;++i)
	{
		for(int j = i;j<n;++j)
		{
			step.push_back(a[j]);
		}
		for(int x = 0;x<step.size();++x)
		{
			for(int y = step.size()-1;y>x;--y)
			{
				if(step[x]==step[y])
				{
					for(int z = x;z<y;++z)
					{
						step[z] = 0;
						x = y;
					}
				}
			}
		}
		for(int j = 0;j<step.size();++j)
		{
			ans[step[j]]++;
		}
		step.clear();
	}
	
	for(int i = 1;i<=m;++i)
	{
		if(i!=m) cout<<ans[i]<<' ';
		else cout<<ans[i]<<endl;
	}
	
	return 0;
}