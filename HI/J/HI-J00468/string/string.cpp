#include<bits/stdc++.h>
using namespace std;
int a[100001],sum,l,r;
char s[100001];
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>s[i]; 
		sum+=a[i];
	}
	for(int i=0,j=n;i<n,j>0,l<=(sum/2),r<=(sum/2);i++,j--)
	{
		if(s[i]!=s[j])
		{
			ans+=min(a[i],a[j]);
		}
		if(a[i]>a[j])
		{
			a[i]-=a[j];
			i--;
			l=l+a[i]-(a[i]-a[j]);
		}
		if(a[i]<a[j])
		{
			a[j]-=a[i];
			j++;
			l=l+a[j]-(a[j]-a[i]);
		}
	}
	cout<<ans;
	return 0;
}
