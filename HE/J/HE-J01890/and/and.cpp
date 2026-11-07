#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001],z=0;
long long b[200001][40];
bool vis[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
	  cin>>a[i];
	  long long g=0;
	  while(a[i])
	  {
	  	b[i][g]=a[i]%2;
	  	a[i]/=2;
		g++;
	  }	
	}
	for(int i=30;i>=0;i--)
	{
		long long cnt=0;
		vector <long long> v;
		for(int l=1;l<=n;l++)
		{
		    if(b[l][i]==1)
		    {
		    	if(vis[l]==0) cnt++;
			}
			else if(vis[l]==0)
			{
			  vis[l]=1,v.push_back(l);	
			}
	    }
	    if(cnt>=m)
	    {
	    	z=z+pow(2,i);
		}
		else
		{
			for(int l=0;l<v.size();l++)
			{
				vis[v[l]]=0;
			}
		}
	}
	cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
 
