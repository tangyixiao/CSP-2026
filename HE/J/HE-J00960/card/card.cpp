#include <bits/stdc++.h>
using namespace std;
int m,n,a[1000000],jl[1000000];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int b[510000]={};
		for(int j=i;j<=n;j++)
		{
			
			if(b[a[j]]==0)
			{
				b[a[j]]=j;
				jl[a[j]]++;
			}
			else
			{
				for(int q=b[a[j]]+1;q<=b[a[j-1]];q++)
				{
					b[a[q]]=0;
					jl[a[q]]--;
				}
				b[a[j]]=j;
			}
		}	
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
	{
		if(jl[a[i]]<0)jl[a[i]]--;
		else
		{
			cout<<jl[a[i]]<<" ";
			jl[a[i]]=-1;
		}
	}
	return 0;
}
