#include<bits/stdc++.h>
using namespace std;
long long int n,m;
const int N=5*1e5+1,M=3*1e5+1;
int a[N],b[M],vvv[M];
bool v[N],vv[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int z=n;
	while(n>0)
	{
	memset(v,0,sizeof(v));
		memset(vv,0,sizeof(vv));
		memset(vvv,0,sizeof(vvv));
		for(int i=z;i>=n;i--)
		{
			v[i]=1;
			if(!vv[a[i]])
			{
			vv[a[i]]=1;	
			vvv[a[i]]=i;
			}
			else
			{
			for(int aa=i;aa<vvv[a[i]];aa++)
			{
				v[aa]=0;
				}	
			} 	
		}
		for(int i=z;i>=n;i--)
		{
			if(v[i])
			{
				b[a[i]]++;
			}
		}
		n--;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}

