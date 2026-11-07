#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool tong[500005];
vector<int> ans;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
    	cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		vector<int> s;
		for(int j = i-1;j <= m;j++)
		{
			if(tong[a[j]] == 0)//没有出现过 
			{
				tong[a[j]]=1;
				s.push_back(a[j]);
			}
			else//出现了 
			{
				for(int k = 1;k <= s.size();k++)//遍历s数组 寻找在哪一位出现 
				{
					if(a[k] == a[j])//找到 
					{
						for(int d = k+1;d <= s.size();d++)//把剩余的都删除 
						{
							s[d] = 0;
							tong[s[d]] = 0;//并把桶中的也删除 
						}
					}
				}
			}
		}
		for(int j =1;j <= s.size();j++)//寻找有没有i 
		{
			for(int k = 1;k <= m;k++)
			{
				if(s[j] == k) s[k]++;
			}
		}
	}
	for(int i = 1;i <= m;i++) 
	{
		cout << ans[i] << " ";
	}
	return 0;
}
