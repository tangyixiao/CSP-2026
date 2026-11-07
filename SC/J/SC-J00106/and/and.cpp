#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
bool fun(int a,int b)
{
	return a>b;
}
int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200004];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}	
	sort(a+1,a+n+1,fun);
	int j,i;
	for(j=2;(a[i]&a[j])<a[j+1];j++)
	{
		for(i=1;i<j;i++)
		{
			if((a[i]&a[j])>=a[j+1])break;
		}
	}
	cout<<(a[i]&a[j]);
	return 0;
}