#include <iostream>
#include <cstdio>
#include <cstring>
#define ll long long
using namespace std;

const int N=5e5+5;
const int M=3e5+5;

int read()
{
	int x=0,f=1;char c=getchar();
	for(;'0'>c||c>'9';c=getchar())if(c=='-')f=-f;
	for(;'0'<=c&&c<='9';c=getchar())x=x*10+(c-'0');
	return x*f;
}

int n,m,a[N],cnt[M],t[N],res[M];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	n=read();
	m=read();
	
	for (int i=1;i<=n;i++)
	{
		a[i]=read();
	}
	
	for (int i=1;i<=n;i++)
	{
		memset(t,0,sizeof t);
		memset(cnt,0,sizeof cnt);
		
		for (int j=i;j<=n;j++)
		{
			if (cnt[a[j]])
			{
				int x=0;
				
				for (int k=1;k<=t[0];k++)
				{
					if (t[k]==a[j])
					{
						x=k;
						break;
					}
				}
				
				for (int k=x;k<=t[0];k++)
				{
					cnt[t[k]]--;
					t[k]=0;
				}
				t[0]-=(t[0]-x+1);
			}
			
			t[++t[0]]=a[j];
			cnt[a[j]]++;
		}
		
		for (int j=1;j<=t[0];j++) 
		{
			res[t[j]]++;
		}
	}
	
	for (int i=1;i<=m;i++)
	{
		cout << res[i] << " ";
	}
	cout << "\n";
	return 0;
}

/*
O(n+n*n*n)=O(n3)
sto wwq老师 orz
曹二评测机发力，给我J一等奖吧 
*/
