#include<bits/stdc++.h>
using namespace std;
int n,a[1000000];
long long ans;
char s[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>s[i];
	int i=1,k=n;
	while(i<=k)
	{
		if(s[i]!=s[k]) 
		{
			if(a[i]<a[k])
			{
				ans+=a[i];
				int j=i+1,x=a[k]-a[i];
				while(x>0&&j<=k)
				{
					if(s[j]==s[k]) {x-=a[j],j++;continue;}
					ans+=min(a[j],x),x-=a[j],j++;
				}
				k--,i=j;
			}
			else
			{
				ans+=a[k];
				int j=k-1,x=a[i]-a[k];
				while(x>0&&j>=i)
				{
					if(s[j]==s[i]) {x-=a[j],j--;continue;}
					ans+=min(a[j],x),x-=a[j],j--;
				}
				i++,k=j;
			}
		}
		else
		{
			if(a[i]>a[k])
			{	
				a[i]-=a[k];
				k--;
			}
			else
			{
				a[k]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
3
5 a
1 b
1 a
*/
