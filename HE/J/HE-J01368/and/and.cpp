#include<bits/stdc++.h>
using namespace std;
int n,m;
long long sum=0;
struct node{
	long long da;
	long long b;
} a[20005];
bool cmp(node a1,node a2)
{
	if(a1.da>a2.da)
	{
		return true;
	}
	return false;
}
bool cmp1(node a1,node a2)
{
	if(a1.b<a2.b)
	{
		return true;
	}
	return false;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].da;
	}
	sort(a+1,a+n+1,cmp);
	if(m==1) 
	{
		cout<<a[1].da;
		return 0; 
	}
	for(int i=1;i<n;i++)
	{
		a[i].b=a[i+1].da-a[i].da;
	}
	sort(a+1,a+n+1,cmp1);
	sum=a[1].da;
	for(int i=2;i<=m;i++)
	{
		sum&=a[i].da;
	}
	cout<<sum;
	return 0;
}
