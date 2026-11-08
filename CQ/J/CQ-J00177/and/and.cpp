#include<bits/stdc++.h>
using namespace std;
long long a[10000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long c;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i = n;i >= n-m+1;i--)
	{
		c=a[n];
		for(int j = 0;j < m;j++)
		{
			c=c&a[n-j];
		}
	} 
	cout<<c;
	return 0;
}
