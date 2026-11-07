#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500001],dj[500001],cs[300001],ms[300001],flag=1,mss=1,maxs;
int main()
{
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{mss=1;flag=1;
		for(int k=1;k<=n;k++) {
			dj[k]=0;ms[k]=0; 
		}
		for(int j=i;j<=n;j++)
		{
			for(int d=1;d<=j-1;d++){
				if(a[j]==dj[d]){
					flag=d;
					for(int l=d;l<=j-1;l++)
					{
						ms[mss]=dj[l];
						dj[l]=0;
						mss++;
					}
				}
			}
			dj[flag]=a[j];flag++; 
		}
		for(int j=1;j<=flag;j++)
		{
			for(int k=1;k<=m;k++)
			{
				if(dj[j]==k)cs[k]++;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<cs[i]<<" ";
	return 0;
 } 