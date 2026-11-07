#include <bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for (int i=1,j=n;i<j;i++)
	{
		int cnt=0;
		while(cnt<a[i])
		{
			if(c[j]!=c[i])
			{
				ans+=min(a[j],a[i]-cnt);
			} 
			cnt+=a[j];
			if(cnt<=a[i])
				j--;
			else
				a[j]=cnt-a[i];
		}
	}
	cout<<ans;
	return 0;
}