#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int a[N];
signed main()
{
	//luogu：@Vesper_Twilight
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	int ans=-1e9;
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	int cnt=1,big=1,nu=a[1];
	a[n+1]=a[n]+1;
	for(int i=2;i<=n+1;i++)
	{
		if(a[i]==a[i-1]) cnt++;
		else
		{
			big=max(big,cnt);
			//cout<<cnt<<" "<<i<<endl;
			if(big>=m&&big==cnt)
			{
				nu=max(nu,a[i-1]);
				//cout<<nu<<" ";
			}
			cnt=1;
		}
	}
	if(big>=m)
	{
		cout<<nu;
		return 0;
	}
	if(m==3&&n<=100)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					ans=max(ans,a[i]&a[j]&a[k]);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==4&&n<=32)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						ans=max(ans,a[i]&a[j]&a[k]&a[w]);
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==5&&n<=16)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[e]);
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==6&&n<=11)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							for(int q=e+1;q<=n;q++)
							{
								ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[q]&a[e]);
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==7&&n<=8)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							for(int q=e+1;q<=n;q++)
							{
								for(int r=q+1;r<=n;r++)
								{
									ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[e]&a[q]&a[r]);
								}
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==8&&n<=6)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							for(int q=e+1;q<=n;q++)
							{
								for(int r=q+1;r<=n;r++)
								{
									for(int l=r+1;l<=n;l++)
									{
										ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[e]&a[q]&a[r]&a[l]);
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==9&&n<=5)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							for(int q=e+1;q<=n;q++)
							{
								for(int r=q+1;r<=n;r++)
								{
									for(int l=r+1;l<=n;l++)
									{
										for(int z=l+1;z<=n;z++)
										{
											ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[e]&a[q]&a[r]&a[l]&a[z]);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==10&&n<=4)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							for(int q=e+1;q<=n;q++)
							{
								for(int r=q+1;r<=n;r++)
								{
									for(int l=r+1;l<=n;l++)
									{
										for(int z=l+1;z<=n;z++)
										{
											for(int u=z+1;u<=n;u++)
											{
												ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[e]&a[q]&a[r]&a[l]&a[z]&a[u]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==11&&n<=4)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int w=k+1;w<=n;w++)
					{
						for(int e=w+1;e<=n;e++)
						{
							for(int q=e+1;q<=n;q++)
							{
								for(int r=q+1;r<=n;r++)
								{
									for(int l=r+1;l<=n;l++)
									{
										for(int z=l+1;z<=n;z++)
										{
											for(int u=z+1;u<=n;u++)
											{
												for(int h=u+1;h<=n;h++)
												{
													ans=max(ans,a[i]&a[j]&a[k]&a[w]&a[e]&a[q]&a[r]&a[l]&a[z]&a[u]&a[h]);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	 } 
	return 0; 
}