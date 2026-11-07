#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> nums(n);
	vector<int> ans(m+1,0);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	for(int i=n;i>=0;i--)
	{
		vector<int> stk;
		vector<bool> init(m+1,0);
		for(int j=i;j<n;j++)
		{
			if(init[nums[j]])
			{
				while(stk.back()!=nums[j])
				{
					init[stk.back()]=0;
					stk.pop_back();
				}
				stk.pop_back();
			}
			stk.push_back(nums[j]); 
			init[nums[j]]=1;
		}
		for(int i=0;i<stk.size();i++)
		{
			ans[stk[i]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
