#include <bits/stdc++.h>
using namespace std;

long long n,ans=0;

struct word
{
	long long g;
	char c;
}a[200005];


int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].g;
        cin>>a[i].c;
        //cout<<a[i].g<<" "<<a[i].c<<" "<<i<<endl;
    }

	//cout<<endl;

	long long ca=0;
	
    for(long long i=1,j=n;i!=j;)
    {
	    if(a[i].c!=a[j].c)
		{
			//cout<<i<<" "<<j;
		    ans+=min(a[i].g,a[j].g);
		    //cout<<" "<<ans;
	        ca=a[i].g-a[j].g;
	        //cout<<" "<<a[i].g<<" "<<a[j].g;
		}
		    
	    if(ca>0)
	    {
	    	j--;
	    	a[i].g-=ca;
		}
		else if(ca<0)
		{
			i++;
			a[j].g+=ca;
		}
		else
		{
			i++;
			j--;
		}
    }

    cout<<ans;

    return 0;
}
