#include<iostream>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],sum[m+1]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		int s[m+1]={0},b[m+1]={0},c[m+1]={0},p=0;
		for(int i=j;i<n;i++)
		{
			if(b[a[i]]==0) {
				s[p]=a[i];
				b[a[i]]=1;
				c[a[i]]=p;
				p++;
			}
			else {
				int q=c[a[i]];
				for(int k=q;k<p;k++)
				{
					b[s[k]]=0;
					c[s[k]]=-1;
					s[k]=0;
				}
				p=q;
				s[p]=a[i];
				b[a[i]]=1;
				c[a[i]]=p;
				p++;
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(b[i]==1) sum[i]++;
		}
	}
	for(int i=1;i<=m;i++)
		{
			cout<<sum[i]<<" ";
		}
	return 0;
}