#include<bits/stdc++.h>
using namespace std;

long long ans=0;

long long a[200005];
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1, j=n; i<j;)
	{
		//cout<<i<<" "<<j;
		if(b[i]!=b[j])
		{
			if(a[i]<a[j])
			{
				ans+=a[i];
				a[j]-=a[i++];
				if(a[j]==0)j--;
			}else{
				ans+=a[j];
				a[i]-=a[j--];
				if(a[i]==0)i++;
			}
		}else{
			long long cur=min(a[i], a[j]);
			a[i]-=cur;a[j]-=cur;
			if(a[i]==0)i++;if(a[j]==0)j--;
		}
	}
	cout<<ans;
	return 0;
} 

