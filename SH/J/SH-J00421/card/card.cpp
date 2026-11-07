#include <iostream>
using namespace std;
int a[20005];
int cnt[10005];
int main()
{
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		for(int j=i-1;j>=0;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<i;k++)
				{
					a[k]=-1;
				}
				cnt[a[i]]++;
				continue;
			}
		}
		cnt[a[i]]++;
	}
	for(int i=0;i<m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
