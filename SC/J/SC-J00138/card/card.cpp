#include <bits/stdc++.h> 
using namespace std;
long long n,m,a[500005],cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
	    for(int j=i;j<=n;j++)
	    {
		    if(a[j]==i)
		    {
		    	for(int k=i;k<j;k++)
		    	{
		    		if(a[k]==a[j])
		    		{
		    			for(int o=k;o<j;o++)
		    			a[o]=0;
					}
				}
			}
	    }
	    for(int l=1;l<=m;l++)
	    {
	    	if(a[l]==l)
	    	cnt[l]++;break;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[m]<<" ";
	}
	freopen("card.out","w",stdout);
    return 0;
}