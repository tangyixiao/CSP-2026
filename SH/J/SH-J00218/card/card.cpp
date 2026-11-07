#include<bits/stdc++.h>
using namespace std;
int a[500005];
int gi_t[300005];
int gi_ans[500005];
stack<int> gs_s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int li_i=1;li_i<=n;li_i++)
	{
		cin>>a[li_i];
	}
	for(int li_i=1;li_i<=n;li_i++)
	{
		gi_t[li_i]=0;
	}
	for(int li_i=1;li_i<=n;li_i++)
	{
		for(int li_j=li_i;li_j<=n;li_j++)
		{
			if(gi_t[a[li_j]]==1)
			{
				while(gs_s.top()!=a[li_j])
				{
					gi_t[gs_s.top()]--;
					gi_ans[gs_s.top()]--;
					gs_s.pop();
				}
				gi_t[a[li_j]]--;
				gi_ans[a[li_j]]--;
				gs_s.pop();
			}
			gi_t[a[li_j]]++;
			gi_ans[a[li_j]]++;
			gs_s.push(a[li_j]);
		}
		memset(gi_t,0,sizeof(gi_t));
	}
	for(int li_i=1;li_i<=m;li_i++)
	{
		cout<<gi_ans[li_i]<<" ";
	}
	return 0;
}
