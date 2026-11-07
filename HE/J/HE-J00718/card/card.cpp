#include<bits/stdc++.h>
using namespace std;
int chuxian[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500010];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		stack<int> s;
		for(int j=1;j<=n-i+1;j++)
		{
			if(a[j]==s.top())
			{
				s.pop();
				chuxian[a[j]]--;
			}
			s.push(a[j]);
			chuxian[a[j]]++;
		}
	 }
	 for(int i=1;i<=m;i++)
	 {
	 	cout<<chuxian[i]<<' ';
	  } 
	  return 0;
 } 
