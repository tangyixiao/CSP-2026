#include<bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];
int n;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++)
{
	cin>>a[i]>>b[i];
	sum+=a[i];
}
cout<<sum/n;
		return 0;
}
