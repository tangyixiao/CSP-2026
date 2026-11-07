#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
priority_queue<int> q;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		q.push(a[i]);
	}
	sort(a+1,a+1+n);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==2)
	{
		cout<<(a[n]&a[n-1]);
		return 0;
	}
	long long ans=0;
	ans=q.top();
	q.pop();
	m--; 
	while(m--)
	{
		int cur=q.top();
		q.pop();
		ans&=cur;
	}
	cout<<ans<<endl;
	return 0;
}
