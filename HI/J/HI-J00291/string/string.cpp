#include<bits/stdc++.h>
using namespace std;
long long n;
long long sum; 
struct xue
{
				long long howl;
				char number;
}a[10000000];
int main()
{
				freopen("string.in","r",stdin);
				freopen("string.out","w",stdout);
				cin>>n;
				for(int i=1;i<=n;i++)
				{
								cin>>a[i].howl>>a[i].number;
				}
				int c=0;
				for(int i=1;i<=n;i++)
				{
								if(a[1].number!=a[i].number)
								c=1;
				}
				if(c==0)
				{
					   cout<<0<<endl;
					   return 0;
				}
				long long j=n;
				for(int i=1;i<=n;i++)
				{
								if((a[i].number==a[j].number)&&(a[i].howl!=a[j].howl))
								{
												sum+=max(a[i].howl,a[j].howl)-min(a[i].howl,a[j].howl);
								}
								else if(a[i].number!=a[j].number)
								{
												sum+=a[j].howl;
												a[j].number=a[i].number; 
								}
								j--;
				}
				cout<<sum<<endl;
}
