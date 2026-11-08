#include<bits/stdc++.h>
using namespace std;
unsigned int a[500005];
int bjj[300005];
int bj[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	stack<int>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=300005;i++)
		{
			bj[i]=0;
		}
		for(int j=i;j<=n;j++)
		{
			if(bj[a[j]]!=0)
			{
				while(q.top()!=a[j]&&q.empty()!=1)
				{
					bj[q.top()]--;
					q.pop();
				}
				q.pop();
				q.push(a[j]);
			}
		
			else
			{
				q.push(a[j]);
				bj[a[j]]++;
			}
				
		}
		while(q.empty()==0)
		{
			bjj[q.top()]++;
			
			q.pop();
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		cout<<bjj[i]<<" ";
	}
	fclose(stdin);
  fclose(stdout);
	return 0;
}

