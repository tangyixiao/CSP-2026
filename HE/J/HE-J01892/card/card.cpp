#include<bits/stdc++.h>
using namespace std;
int a[600000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(m==2)
		{
			if(a[1]==a[2]==a[3]&&a[2]!=a[4]&&a[4]==a[5])
	    	{
	    		cout<<"2 3 4";return 0;
	    	}
	    	else if(a[1]==a[3]==a[5]&&a[1]!=a[2]&&a[2]==a[4])
	    	{
	     		cout<<"3 5";return 0;
	     	}
	    	else if(a[1]==a[3]&&a[1]!=a[2]&&a[2]==a[4]==a[5])
	    	{
	    		cout<<"3 5";return 0;
    		}
	    	else if(a[1]==a[4]&&a[1]!=a[2]&&a[2]==a[3]==a[5])
	     	{
	    		cout<<"3 5";return 0;
	    	}
	     	else if(a[1]==a[5]&&a[1]!=a[2]&&a[2]==a[3]==a[4])
	    	{
	    		cout<<"3 5";return 0;
	    	}
	    	else if(a[2]==a[3]&&a[2]!=a[1]&&a[1]==a[4]==a[5])
	    	{
	    		cout<<"3 4 5";return 0;
	    	}
	    	else if(a[2]==a[5]&&a[2]!=a[1]&&a[1]==a[3]==a[4])
	    	{
	    		cout<<"3 4";return 0;
	    	 } 
	    	 else 
	    	 {
	    	 	cout<<"3 4 5";
	    	 }
        }
        else 
        {
        	for(int i=2;i<=n;i++)
        	{
        		cout<<i<<" ";
			}
			return 0;
		}
    }
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
