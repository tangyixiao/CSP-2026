#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	
	long long n,m;
	vector<int> a,ans;
	cin>>n>>m;
	a.resize(n);
	ans.resize(m);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		stack<int> sto,stn;
		for(int j=i+1;j<=n;j++)
		{
			sto.push(a[j]);
			stn.push(a[j]);
			
			if(!sto.empty())
			{
				int t=sto.top();
				while(t!=sto.top())
				{
					sto.pop();
				}
				
				if(sto.empty())
				{
					sto=stn;
				}else
				{
					stn=sto;
				}
			}
			
		}
		
		while(!stn.empty())
		{
			ans[stn.top()]++;
			stn.pop();	
		}
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
