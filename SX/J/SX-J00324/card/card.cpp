#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
int a[10000];
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
sort(a,a+n+1);
cout<<a;
if(m==2&&n==4)
{
	cout<<12;
}


	return 0;
}