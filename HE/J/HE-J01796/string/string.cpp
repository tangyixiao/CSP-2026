#include<bits/stdc++.h>
using namespace std;

long long n,a[300005],mi,ans,x;
char c[300005],s;
 
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    scanf("%lld",&n);
	for(long long i=1;i<=n;i++)
	{
//		cin>>a[i]>>c[i];
        scanf("%lld",&a[i]);
        cin>>c[i]; 
	}	
	long long l=1,r=n;
	while(l<=r)
    {
    	mi=min(a[l],a[r]);
    	if(mi==a[l]&&mi==a[r])
    	{
    		if(c[l]!=c[r])
    		{
    			ans+=a[r];
			}
            l++,r--;
		}
		else
		{
		    if(c[l]!=c[r])
		    {
		    	if(a[l]>a[r])
		    	{
		    		a[l]=abs(a[l]-a[r]);
//		    		s=c[l];
                    ans+=a[r];
		    		r--;
				}
				else if(a[l]<a[r])
				{
					a[r]=abs(a[r]-a[l]);
//					s=c[r];
					
					ans+=a[l];
					l++;
				}
			}
			else if(c[l]==c[r])
			{
				if(a[l]>a[r])
				{
					a[l]=abs(a[l]-a[r]);
//					s=c[l];
					
//					ans+=a[r];
					r--;
				}
				else if(a[l]<a[r])
				{
					a[r]=abs(a[r]-a[l]);
//					s=c[l];
					
//					ans+=a[l];
					l++;
				}
			}
		} 	
	}
	cout<<ans;
//    printf("%lld",ans);
}
