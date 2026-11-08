#include<bits/stdc++.h>
using namespace std;
int n,m,a[500099],b[300099],bj[300099];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n==m)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" ";
		}
		return 0;
	} 
	for(int i=1;i<=n;i++)
	{
		stack<int>s;
		for(int j=i;j<=n;j++) 
		{
			bj[a[j]]++;
			if(bj[a[j]]>=2)
			{
				while(s.top()!=a[j]&&!s.empty())
				{
					bj[s.top()]--;
					s.pop(); 
				}
				s.pop();
				bj[a[j]]--;
			}
			s.push(a[j]);
		}
		while(!s.empty())
		{
			b[s.top()]++;
			s.pop();
		}
//		cout<<"@#@#@#@#@";
		for(int k=1;k<=m;k++)
		{
			bj[k]=0;
//			cout<<b[k]<<" ";
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
} 
