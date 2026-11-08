#include <bits/stdc++.h>
using namespace std;
long long n,a,c,sum=0;
char d,b;
bool chongfu=true;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>a>>b;
	int b2=b;
	sum+=a;
	if(n>=2)
	{
		for(int i=2;i<=n;i++)
	    {
	    	cin>>c>>d;
	    	sum+=c;
	    	if(chongfu)
		    {
		    	if(d==b2)
		        { 
		    		chongfu=true;
		    	}
		    	else{
			    	chongfu=false;			
			    }
		    }
		    b2=d;
	    }
	} 
	if(chongfu)
	{
		cout<<0;
	}
	else{
		if(sum%2==0)
		{
			cout<<sum/2; 
		}
		else{
			cout<<sum-(sum/2+1);
		}
	}
	return 0;
	
} 
