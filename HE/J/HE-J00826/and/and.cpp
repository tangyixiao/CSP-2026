#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	long long maxn=-1;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1)
	{
		cout << maxn;
	}
	if(n==m)
	{
		int sum=a[1];
		for(int i=2;i<=n;i++)
		{
			sum=sum & a[i];
		}
		cout << sum;
		return 0;
	}
	 
	if(m==2 && n<=2000)
	{
		maxn=0;
		//int ai[23],aj[23],cnt=0;
		while(m)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(i!=j && a[i] & a[j]>maxn)
					{
						maxn=a[i] & a[j];
						//ai[cnt]=i;
						//aj[cnt]=j;
						//cnt++;
					}
				}
			}
			m--;
		}
		cout << maxn;
		return 0;
	}
	
	
	/*for(int i=1;i<=n;i++)
	{
		
	}*/
	return 0;
}
