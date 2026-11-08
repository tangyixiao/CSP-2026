#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,sum=0,ans=1,ans1=1,j=0,x=0,sum1=0;
const ll maxn=500005;
bool flag=true;
vector<ll> v;
ll s[maxn];
ll v1[maxn];
int main()
{
    freopen("crystal.in","r",stdin);
    freopen("crystal.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>v1[i];
    sort(v1,v1+n);
    for(int i=1;i<n;i++) {
    	v.push_back(v1[i]-v1[i-1]);	
	}
	for(int i=0;i<n-2;i++)
	{
		if(v[i]!=v[i+1])
		{
			flag=false;
		}
	}
    s[0]=0;
    s[1]=v[0];
    for(int i=2;i<n;i++) s[i]=s[i-1]+v[i-1];
    if(flag)
    {
    	for(int i=0;i<n;i++)
    	{
    		if(((v[0]+i*v[0])*i)/2>m)
    		{
    			ans1=i;
    			break;
			}
		}
	}
	else
	{
		while(x<n)
    	{
       		if(sum+v[x]*(x-j+1)<=m)
        	{
        		sum+=v[x]*(x-j+1);
				ans++;
				x++;
				ans1=max(ans1,ans);
			}
			else
			{
				if(x==j)
				{
					sum+=v[x]*(x-j+1);
					sum=sum-s[x+1]+s[j];
					ans=x-j+1;
					x++;j++; 
				}
				else if(x!=j) 
				{
					sum+=v[x]*(x-j+1);
					sum=sum-s[x+1]+s[j];
					ans=x-j+1;
					j++;
				}
			}
		}
	}
    cout<<ans1;
    return 0;
}
