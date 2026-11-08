#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[1000000];
int main()
{
				freopen("and.in","r",stdin);
				freopen("and.out","w",stdout);
				cin>>n>>m;
				for(int i=1;i<=n;i++)
				{
								cin>>a[i];
				}
				if(m==2)
				{
								long long maxn=0;
								for(int i=1;i<=n;i++)
								{
												long long sum=0;
												for(int i1=1;i1<=n;i1++)
												{
																if(i1!=i)
																sum=a[i1]&a[i];
																else 
																continue;
																if(sum>maxn)
																maxn=sum;
												}
								}
								cout<<maxn<<endl;
								return 0;
				}
				else if(m==3)
				{
								long long maxn=0;
								for(int i=1;i<=n;i++)
								{
												for(int i1=1;i1<=n;i1++)
												{
																long long sum=0;
																for(int j=1;j<=n;j++)
																{
																				if(i1!=i&&i1!=j&&i!=j)
																				sum=a[i1]&a[i]&a[j];
																				else 
																				continue;
																				if(sum>maxn)
																				maxn=sum;
																}
												}
								}
								cout<<maxn<<endl;
								return 0;
				}
}
