#include<bits/stdc++.h>
using namespace std;
long long int a[200009];
char b[200009];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n,ans=0,pop=1;
	cin>>n;
	for(long int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(long int i=1,j=n;i<j-1;)
	{
		if(a[i]==0)
		{
			i++;
		}
		if(a[j]==0)
		{
			j--;
		}
		if(b[i]!=b[j])
		{
			ans=ans+min(a[i],a[j]);
		}
		//cout<<i<<" "<<a[i]<<" "<<j<<" "<<a[j]<<endl;
		if(a[i]>a[j]){
			a[i]=a[i]-a[j];
			a[j]=0;
		}if(a[i]<a[j]){
			a[j]=a[j]-a[i];
			a[i]=0;
		}if(a[i]==a[j])
		{
			a[i]=0;
			a[j]=0;
		}
	}
	cout<<ans;
	return 0;
}
