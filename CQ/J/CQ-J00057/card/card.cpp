#include<bits/stdc++.h>
using namespace std;
int n,m,a[50005],s[30005],cnt[50005],cnt2[30005];
int main()
{
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int p=1;
	for(int i=1;i<=n;i++)
	{
		p=1;
		for(int j=i;j<=n;j++)
		{
			if(cnt[a[j]]==0)
			{
				s[p]=a[j];
				cnt[j]=p;
				p++;
			}
			else
			{
				for(int k=cnt[a[j]];k<=n;k++)
					s[k]=0;
				p=cnt[a[j]];
				cnt[a[j]]=0;
			}
		}
		for(int j=1;j<=n;j++)
		{
			//cout<<s[j];
			cnt2[s[j]]++;
			s[j]=0;
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++)
		cout<<cnt2[i]<<" ";
	
	return 0;
}
