#include<bits/stdc++.h>
using namespace std;
string u;
bool us(int n,int m)
{
	if(n*m*n<100000)return 1;
	return 0;
}
string s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n,a[500005],b[200005],i=0;
	cin>>n>>m;
	int s=n;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(us(n,m))
	{
		while(n)
		{
			i++;
			for(int j=i;j<=n;j++)
			{
				int p=0;
				for(int k=0;k<u.size();k++)
				{
					if(u[k]==a[j])
					{
						p=k;break;
					}
				}
				if(p)
				{
					for(int sd=p;sd<=u.size();sd++)
					{
					    for(int sk=1;sk<=n;sk++)
					    {
					    	if(a[sk]==u[sd]-'0')a[sk]=0;
						}
						sort(a+1,a+1+n);
						for(int sk=1;sk<=n;sk++)
						{
							if(a[i]==0)
							{
								n=i;
								break;
							}
						}
						u[sd]='0';
				    }
				}
				u+=a[j];
			}
			for(int i=1;i<=u.size();i++)
			{
				b[u[i]-'0']++;
			}
		}
		for(int bu=1;bu<=m;bu++)
		{
			cout<<b[m]<<" ";
		}
	}
 } 
