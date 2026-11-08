#include <iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string sum;
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2)
	{
		sum+='1';
		for (int i=0;i<s1.size();i++)
	    {
	    	for (int j=i;j<=i;j++)
    		{
	    		if (i==1)
	    		{
		    		if (s1[0]==s2[0] && s1[1]==s2[1])
			        {
	    			    sum+='1';
    				    if ((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D'))
    			       	{
	    		   		    sum+='1';
    			   		    if ((s1[2]<='B' && s2[2]<='B') || ((s1[2]>='B' && s1[2]<='C') && (s2[2]>='B' && s2[2]<='C')) || ((s1[2]>='D' && s1[2]<='F') && (s2[2]>='D' && s2[2]<='F')))
	    		      	    {
	    	       			    sum+='1';
	    	       	    	}
	    	        		else
	    	         		{
    		         	    	sum+='0';
	    	            	}
    			       	}
		         		else
	    	       		{
                            sum+='0';
	            		}
	    	        }
    		        else
    	        	{
                    sum+='0';
    	        	}
    			}
    		}
    	}
	}
	else
	{
		sum+='0';
	}
	if (sum.size()!=4)
	{
		while(4-sum.size()>0)
		{
			sum+='0';
		}
	}
	cout <<sum;
	return 0;
}
