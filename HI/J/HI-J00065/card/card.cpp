#include<bits/stdc++.h> 
using namespace std;
int n,m,a[500010]={},flag=0,g,sum[500010]={};
deque<int>b;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			flag=0;
			for(int k=0;k<b.size();k++)
			{
				if(a[j]==b[k])
				{
					g=k;
					flag=1;
					break;
				}
			}
			if(flag!=1)
			{
				b.push_back(a[j]);
			}
			else
			{
				for(int k=g;k<=b.size();k++)
				{
					b.pop_back();
				}
				b.push_back(a[j]);
			}
		}
		for(int j=0;j<b.size();j++)
		{
			sum[b[j]]++;
		}
	}
	sort(a+1,a+1+n);
	for(int i=0;i<m;i++)
	{
		cout<<sum[a[i]]<<" ";
	}
}
