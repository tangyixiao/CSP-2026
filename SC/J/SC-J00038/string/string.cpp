#include <bits/stdc++.h> 
using namespace std;
int l[100005];
char a[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>l[i]>>a[i];
	}
	long long ans=0;
	for(int i=1,j=n;i<=j;)
	{
		if(i==j)
		{
			l[i]==0;
			break;
		}
		if(a[i]==a[j])
		{
			int l1=l[i],l2=l[j];
			l[i]-=min(l1,l2);
			l[j]-=min(l1,l2);
		}
		if(a[i]!=a[j])
		{
			int l1=l[i],l2=l[j];
			ans+=min(l1,l2);
			l[i]-=min(l1,l2);
			l[j]-=min(l1,l2);
		}
		if(l[i]==0)
		{
			i++;
		}
		if(l[j]==0)
		{
			j--;
		}
	}
	cout<<ans;
	return 0; 
}