#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
int antia[200005];
char antic[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		antia[n-i+1]=a[i];
		antic[n-i+1]=c[i];
	}
	int l=1,r=1;
	long long ans=0;
	int len1=a[l],len2=antia[r];
	while(l<=n&&r<=n)
	{
		if(c[l]!=antic[r])
		{
			ans+=min(len1,len2);
		}
		if(len1<len2)
		{
			l++;
			len2-=len1;
			len1=a[l];
		}
		else if(len1==len2)
		{
			l++;r++;
			len1=a[l];
			len2=antia[r];
		}
		else if(len1>len2)
		{
			r++;
			len1-=len2;
			len2=antia[r];
		}
	}
	ans/=2;
	cout<<ans<<endl;
	return 0;
}
