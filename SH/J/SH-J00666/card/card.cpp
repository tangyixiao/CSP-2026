#include<bits/stdc++.h>
using namespace std;

int a[500005];
int cnt[500005];

int m[500005];
int w[500005];


int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,q;
	cin >> n >> q;
	for(int i = 1;i<=n;i++)
	{
		cin >>a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		memset(m,0,sizeof(m));
		memset(w,0,sizeof(w));
		for(int j = i;j<=n;j++)
		{
			if(w[a[j]]!=0)
			{
				for(int k = w[a[j]];k<=n;k++)
				{
					m[k]=0;
					w[a[k]]=0;
				}
			}
			m[j]=a[j];
			w[a[j]]=j;	
		}
		for(int j = i;j<=n;j++)
		{
			cnt[m[j]]++;
			cout << m[j]<<" ";	
		}
		cout << endl;
	}
	for(int i = 1;i<=q;i++)
	{
		cout<< cnt[i]<<" ";
	}
	return 0;
}
