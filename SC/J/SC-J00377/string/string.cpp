#include<bits/stdc++.h> 
using namespace std;
	long long n=0,m=0,f=0,mid=0,s=0,l=0;
	string a;
	char z;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m>>z;
		for(int j=0;j<m;j++)
		{
				a[f+j]=z;
				
		}
		f=f+m;
		
    }
    
    l=f;
    if(l%2==1)
    {
    	mid=(l+1)/2-1;
	}
	else mid=l/2-1;
	 
    for(int i=0;i<=mid;i++)
	{ 
	   
          if(l%2==0)
          {
		  
	          if(a[mid-i]!=a[mid+i+1])
				{
					s++;
				 
				}
	    	}
	    	else
	    	{
			
			if(a[mid-i]!=a[mid+i])
			{
				s++;
			 
			}
		}
		
    }
    
		cout<<s;
    
	
	

	
		
	
	
	
return 0;
}
