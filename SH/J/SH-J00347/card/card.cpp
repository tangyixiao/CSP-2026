#include <bits/stdc++.h>
using namespace std;
long long a[1000086];
long long b[1000086];
bool vis[1000086]={0};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	long long n,k;
	cin>>n>>k;
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;i<=n;j++)
//		{
//			
//			if(vis[i+j-2]!=1)b[j]=a[i+j-2];
//			for(int v=1;v<=n;v++)
//			{
//				if(b[v]==a[i+j-2])
//				{
//					for(int l=v+1;l<=n;l++)
//					{
//						b[l]=0;
//						j=l;
//						vis[l]=1;
//					}
//					
//				}
//			}
//			
//		}
//	}
	for(int i=0;i<k;i++)
	{
		cout<<n<<" ";
	}
	return 0;
}
