#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int cnt[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&cnt[i]);
		cin>>c[i];
	}
	long long ans=0;
	for(int i=1,j=n;;)
	{
		if(j<=i)
		{
			break;
		}
		if(c[i]==c[j])
		{
			if(cnt[i]<cnt[j])
			{
				cnt[j]-=cnt[i];
				cnt[i]=0;
				i++;
			}
			else if(cnt[i]==cnt[j])
			{
				cnt[i]=cnt[j]=0;
				i++,j--;
			}
			else
			{
				cnt[i]-=cnt[j];
				cnt[j]=0;
				j--;
			}
		}
		else
		{
			if(cnt[i]<cnt[j])
			{
				cnt[j]-=cnt[i];
				ans+=1ll*cnt[i];
				cnt[i]=0;
				i++;
			}
			else if(cnt[i]==cnt[j])
			{
				ans+=1ll*cnt[i];
				cnt[i]=cnt[j]=0;
				i++,j--;
			}
			else
			{
				cnt[i]-=cnt[j];
				ans+=1ll*cnt[j];
				cnt[j]=0;
				j--;
			}
		}
	}
	cout<<ans;
	
	return 0;
}
