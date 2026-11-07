#include<iostream>
#include<string> 
using namespace std;
int n,m,a[200005],desk[200005],deskis[200005],sum[20005];
int main()
{
	//freopen{'card','in',}
	//freopen{'card','ans',}
	
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n;i++)
{
	for(int l=i;l<=n;l++)
	{
		int j=i;
		if(deskis[a[l]]==0)
		{
			deskis[a[l]]=j;
			desk[j]=a[l];
		}
		else
		{
			int k=deskis[a[l]]+1;
			j=k;
			while(desk[k])
			{
				desk[k]=0;
				deskis[k]=0;
				k++;
			}
		}
		j++;
	}
	for(int k=1;k<=n;k++)
	{
		sum[desk[k]]++;
		desk[k]=0;
		deskis[k]=0;
	}
}
	for(int i=1;i<=m;i++)
	{
		cout<<sum[i]<<" ";
	}
    return 0;
}
