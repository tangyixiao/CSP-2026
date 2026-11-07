#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
const int N=1e5+5;
int pos[N],a[N],b[N];
bool f[N];
void cmp(int x,int &y)
{
	if(f[x])
	{
		while(a[y]!=x)
		{
			a[y]=0;
			f[a[y]]=0;
			y--;
		}
	}
	else
	{
		y++;
		a[y]=x;
		f[x]=1;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin >>n >>m;
	for(int i=1;i<=n;i++)
		cin >>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(b,0,sizeof(b));
		memset(f,0,sizeof(f));
		int y=0;
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]])
			{
				while(b[y]!=a[j])
				{
					f[b[y]]=0;
					b[y]=0;
					y--;
				}
			}
			else
			{
				y++;
				b[y]=a[j];
				f[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++)
			if(f[j])
				pos[j]++;
	}
	for(int i=1;i<=m;i++)
		cout <<pos[i] <<" ";
	return 0;
 } 
