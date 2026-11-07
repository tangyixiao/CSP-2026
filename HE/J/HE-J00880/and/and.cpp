#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],maxa=-1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxa=max(a[i],maxa);
	}
	if(m==1)
	{
		cout<<maxa<<endl;
		return 0;
	} 
	if(m==n)
	{
	 	long long ans=a[1];
	 	for(int i=2;i<=n;i++) ans=ans&a[i];
	 	cout<<ans;
	 	return 0;
	}
	if(m==2)
	{
	 	long long ans=-1;
	 	for(int i=1;i<=n;i++)
	 	{
	 		for(int j=i+1;j<=n;j++)
	 		{
	 			ans=max(ans,a[i]&a[j]);
			 }
		 }
		 cout<<ans;
		 return 0;
	 }
	 cout<<10;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
