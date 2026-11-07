#include <bits/stdc++.h>
using namespace std;

int n,m,a[500005],t[300005],ans[300005];
bool flag=1;


void x()
{
	for(int j=1;j<=n;j++)
	{
		stack<long long> s;
		for(int i=j;i<n;i++)
		{
			if(t[a[i]]==1)
			{
				while(s.top()==a[i])
				{
					s.pop();
				}
				t[a[i]]--;
			}
			s.push(a[i]);
			t[a[i]]++;
		}
		while(!s.empty())
		{
			ans[s.top()]++;
			s.pop();
		}
	}
	cout<<ans[1];
	for(int i=1;i<=m;i++)
	{
		cout<<" "<<ans[i];
	}
}

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<=a[i-1])  flag=0;
	}
	
	if(m==1)//µ±m=1Ê± 
	{
		if(n%2==1)
		{
			cout<<(n+1)/2;
		}
		else
		{
			cout<<n/2;
		}
	}
	
	else if(flag==1)
	{
		int sum=1;
		cout<<1;
		for(int i=0;i<m;i++)
		{
			cout<<" "<<sum;
			sum++;
		}
	}
	
	
	else
	{
		x();
	}
	
	return 0;
}
