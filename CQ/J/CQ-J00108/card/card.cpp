#include <bits/stdc++.h>
using namespace std;
bool use[300005];
int sum[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005];
	cin>>n>>m;
	int q=n,y=1;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int j=1;j<=n;j++)
	{
		stack<int> x;
		for (int i=y;i<=q;i++)
		{
			if (use[a[i]]==false)
			{
			    x.push(a[i]);
			    use[a[i]]=true;
			}
			else
			{
				while (!x.empty())
				{
					if (x.top()!=a[i])
					{
						x.pop();
					}
					else
					{
						x.pop();
						break;
					}
				}
				x.push(a[i]);
			}
        }
        while (!x.empty())
        {
        	sum[x.top()]++;
        	x.pop();
		}
        y++;
        for (int i=1;i<=q;i++)
        {
        	use[a[i]]=false;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<sum[i]<<" ";
	}
	return 0;
} 
