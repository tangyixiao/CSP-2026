#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
 	vector<int> cnt;
	stack<int> car;//card
	int n,m,r,k;
	cin>>n>>m;
	int i,l,a[n+1],ans[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		ans[i]=0;
	}
	if(m<=2&&n>5000&&n<=200000)
	{
		if(m==1)ans[1]=n;
		else if(m==2)
		{
			for(i=1;i<=n;i++)
			{
				ans[a[i]]++;
				if(a[n]!=a[i])ans[a[n]]++;
			}
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			vector<int> cnt;
	    	stack<int> car;//card
	  	 	for(l=i;l<=n;l++)
	  		{
	   	 		bool b=true;
	  	  		for(r=0;r<cnt.size();r++)
	    		{
	    			if(cnt[r]==a[l])
	    			{
	    				b=false;
	    				break;
					}
				}
				if(!b)
				{
					for(k=cnt.size()-1;;k--)
					{
						if(car.top()==a[l])break;
						else 
						{
							car.pop();
							cnt.pop_back();
						}
					}
				} 
				else
				{
					car.push(a[l]);
					cnt.push_back(a[l]); 
				} 
			}
			for(l=0;l<cnt.size();l++)
			{
				ans[cnt[l]]++;
			}
		}
	}
	for(i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
