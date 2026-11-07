#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005];
int ans;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	if(i!=j)
		    	{
		    	   int x=a[i]&a[j];
		    	   ans=max(ans,x);
		        }
		    }
		}
		cout<<ans;
	}
	else if(m==3)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   if(i!=j&&i!=k&&j!=k)
		    	   {
		    	        int x=a[i]&a[j]&a[k];
		    	        ans=max(ans,x);
		           }
		        }
		    }
		}
		cout<<ans;
	}
	else if(m==4)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    	   if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l];
		    	        ans=max(ans,x);
		           }
		        }
		        }
		    }
		}
		cout<<ans;
	}
	else if(m==5)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    		for(int o=1;o<=n;o++)
		    		{
		    	   if(i!=j&&i!=k&&i!=l&&i!=o&&j!=k&&j!=l&&j!=o&&k!=l&&k!=o&&l!=o)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l]&a[o];
		    	        ans=max(ans,x);
		           }
		           }
		        }
		        }
		    }
		}
		cout<<ans;
	}
	else if(m==6)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    		for(int o=1;o<=n;o++)
		    		{
		    		for(int p=1;p<=n;p++)
		    		{
		    			
		    	   if(i!=j&&i!=k&&i!=l&&i!=o&&i!=p&&j!=k&&j!=l&&j!=o&&j!=p&&k!=l&&k!=o&&k!=p&&l!=o&&l!=p&&o!=p)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l]&a[o]&a[p];
		    	        ans=max(ans,x);
		           }
		           }
		           }
		        }
		        }
		    }
		}
		cout<<ans;
	}
	else if(m==7)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    		for(int o=1;o<=n;o++)
		    		{
		    		for(int p=1;p<=n;p++)
		    		{
		    			for(int q=1;q<=n;q++)
		    		{
		    			
		    	   if(i!=j&&i!=k&&i!=l&&i!=o&&i!=p&&i!=q&&j!=k&&j!=l&&j!=o&&j!=p&&j!=q&&k!=l&&k!=o&&k!=p&&k!=q&&l!=o&&l!=p&&l!=q&&o!=p&&o!=q&&p!=q)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q];
		    	        ans=max(ans,x);
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
	else if(m==8)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    		for(int o=1;o<=n;o++)
		    		{
		    		for(int p=1;p<=n;p++)
		    		{
		    			for(int q=1;q<=n;q++)
		    		{
		    			for(int r=1;r<=n;r++)
		    		{
		    			
		    	   if(i!=j&&i!=k&&i!=l&&i!=o&&i!=p&&i!=q&&i!=r&&j!=k&&j!=l&&j!=o&&j!=p&&j!=q&&j!=r&&k!=l&&k!=o&&k!=p&&k!=q&&k!=r&&l!=o&&l!=p&&l!=q&&l!=r&&o!=p&&o!=q&&o!=r&&p!=q&&p!=r&&q!=r)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r];
		    	        ans=max(ans,x);
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
		else if(m==9)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    		for(int o=1;o<=n;o++)
		    		{
		    		for(int p=1;p<=n;p++)
		    		{
		    			for(int q=1;q<=n;q++)
		    		{
		    			for(int r=1;r<=n;r++)
		    		{
		    			for(int s=1;s<=n;s++)
		    		{
		    			
		    	   if(i!=j&&i!=k&&i!=l&&i!=o&&i!=p&&i!=q&&i!=r&&i!=s&&j!=k&&j!=l&&j!=o&&j!=p&&j!=q&&j!=r&&j!=s&&k!=l&&k!=o&&k!=p&&k!=q&&k!=r&&k!=s&&l!=o&&l!=p&&l!=q&&l!=r&&l!=s&&o!=p&&o!=q&&o!=r&&o!=s&&p!=q&&p!=r&&q!=s&&q!=r&&q!=s&&r!=s)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s];
		    	        ans=max(ans,x);
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
		else if(m==10)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
		    {
		    	for(int k=1;k<=n;k++)
		    	{
		    	   for(int l=1;l<=n;l++)
		    	{
		    		for(int o=1;o<=n;o++)
		    		{
		    		for(int p=1;p<=n;p++)
		    		{
		    			for(int q=1;q<=n;q++)
		    		{
		    			for(int r=1;r<=n;r++)
		    		{
		    			for(int s=1;s<=n;s++)
		    		{
		    			for(int t=1;t<=n;t++)
		    		{
		    			
		    	   if(i!=j&&i!=k&&i!=l&&i!=o&&i!=p&&i!=q&&i!=r&&i!=s&&i!=t&&j!=k&&j!=l&&j!=o&&j!=p&&j!=q&&j!=r&&j!=s&&j!=t&&k!=l&&k!=o&&k!=p&&k!=q&&k!=r&&k!=s&&k!=t&&l!=o&&l!=p&&l!=q&&l!=r&&l!=s&&l!=t&&o!=p&&o!=q&&o!=r&&o!=s&&o!=t&&p!=q&&p!=r&&q!=s&&q!=r&&q!=s&&q!=t&&r!=s&&r!=t&&s!=t)
		    	   {
		    	        int x=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t];
		    	        ans=max(ans,x);
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
	}
	return 0;
}
