#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200010],s,s1,s2,ans;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s=max(a[i],s);
		s1&=a[i];
	}
	if(m==1){
		cout<<s;
		return 0;
	}
	if(m==n){
		cout<<s1;
		return 0;
	}
	if(n<=2000&&n>20){
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++){
				s2=a[i]&a[j];
				ans=max(ans,s2);
			}
		}
		cout<<ans;
		return 0;
	}
	else
	{
		if(m==2){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					s2=a[q]&a[z];
					ans=max(ans,s2);
				}
			}
		}
		if(m==3){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{s2=a[q]&a[z]&a[w];
						ans=max(ans,s2);}
				}
			}
		}
		if(m==4){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{
						for(int s=w+1;s<=n-m+s;s++)
						{s2=a[q]&a[z]&a[w]&a[s];
							ans=max(ans,s2);}
					}
				}
			}
			
		}
		if(m==5){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{
						for(int s=w+1;s<=n-m+s;s++)
						{
							for(int x=s+1;x<=n-m+x;x++)
							{s2=a[q]&a[z]&a[w]&a[s]&a[x];
								ans=max(ans,s2);}
						}
					}
				}
			}
			
		}
		if(m==6){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{
						for(int s=w+1;s<=n-m+s;s++)
						{
							for(int x=s+1;x<=n-m+x;x++)
							{
								for(int e=x+1;e<=n-m+e;e++)
								{s2=a[q]&a[z]&a[w]&a[s]&a[x]&a[e];
									ans=max(ans,s2);}
							}
						}
					}
				}
			}
			
		}
		if(m==7){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{
						for(int s=w+1;s<=n-m+s;s++)
						{
							for(int x=s+1;x<=n-m+x;x++)
							{
								for(int e=x+1;e<=n-m+e;e++)
								{
									for(int d=e+1;d<=n-m+d;d++)
									{s2=a[q]&a[z]&a[w]&a[s]&a[x]&a[e]&a[d];
										ans=max(ans,s2);}
								}
							}
						}
					}
				}
			}
			
		}
		if(m==8){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{
						for(int s=w+1;s<=n-m+s;s++)
						{
							for(int x=s+1;x<=n-m+x;x++)
							{
								for(int e=x+1;e<=n-m+e;e++)
								{
									for(int d=e+1;d<=n-m+d;d++)
									{
										for(int c=d+1;c<=n-m+c;c++)
										{s2=a[q]&a[z]&a[w]&a[s]&a[x]&a[e]&a[d]&a[c];
											ans=max(ans,s2);}
									}
								}
							}
						}
					}
				}
			}
			
		}
		if(m==9){
			for(int q=1;q<=n-m+1;q++)
			{
				for(int z=q+1;z<=n-m+z;z++)
				{
					for(int w=z+1;w<=n-m+w;w++)
					{
						for(int s=w+1;s<=n-m+s;s++)
						{
							for(int x=s+1;x<=n-m+x;x++)
							{
								for(int e=x+1;e<=n-m+e;e++)
								{
									for(int d=e+1;d<=n-m+d;d++)
									{
										for(int c=d+1;c<=n-m+c;c++)
										{
											for(int r=c+1;r<=n-m+r;r++)
											{
												s2=a[q]&a[z]&a[w]&a[s]&a[x]&a[e]&a[d]&a[c]&a[r];
												ans=max(ans,s2);
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
	}
	return 0;
}