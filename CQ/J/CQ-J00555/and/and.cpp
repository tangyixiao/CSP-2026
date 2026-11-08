#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000000];
bool cmp(int q,int p)
{
	int q2=q,p2=p;
	int q1=0,p1=0;
	while(q>0)
	{
		if(q%2==0)
		{
			q1++; 
		}
		q/=2;
	}
	while(p>0)
	{
		if(p%2==0)
		{
			p1++;
		}
		p/=2;
	}
	if(q1==p1)
	{
		return q2>p2;
	}
	return q1>p1;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	cout<<a[m];
	return 0; 
 } 
