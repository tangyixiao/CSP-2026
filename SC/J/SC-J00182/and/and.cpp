#include<bits/stdc++.h>
using namespace std;
long long a[200005];
stack<long long>q;
long long ans=0;
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	int r=n;
	for(int i=1;i<=m;i++)
	{
		q.push(a[r]);
		r--;
	}
	while(!q.empty())
	{
		if(q.size()==1)
		{
			break;
		}
		long long a1=q.top();
		q.pop();
		long long a2=q.top();
		q.pop();
		q.push((long long)(a1&a2));
	}
	cout<<q.top();
	return 0;
}