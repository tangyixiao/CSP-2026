#include<bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m,a[500005],status[500005]={},value[500005],uwu=0;
	//goal=expected card value  value[i]=count of number
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)//game cnt
	{
		int flag=0,cards_shown=0;;
		for(int j=n-flag;j<n;j++)//card count
		{
			if(j!=0)
			{
				for(int k=0;k<j;k++)
				{
					if(status[k]=a[j])
					{
						status[j-flag]=a[j];
						uwu=j-flag;
						int cnt=0;
						break;
					}
					else
					 	int cnt=1;
				}
				if(cnt==1)
				{
					status[j]=a[j];
					uwu++;
				}
			}
		}
		flag++;
		for(int awa=0;awa<uwu;awa++)
			if(status[awa]=i)
				value[i]++;
	} 
	for(int i=0;i<n;i++)
		cout<<value[i];
	return 0;
}
