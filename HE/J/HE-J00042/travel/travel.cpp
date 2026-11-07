#include <bits/stdc++.h>
using namespace std;
string sd,sd2,ry,ry2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string k,h,s,d;
	cin>>k>>h>>s>>d;
	if(k==s){//同车 
	    for(int i=0;i<h.size();i++)//拆分 
	    {
	    	if(h[i]>='0'&&h[i]<='9')
		{
			sd+=h[i];
		}
	    	else{
			sd2+=h[i];
		}
	     	if(d[i]>='0'&&d[i]<='9')
		{
			ry+=d[i];
		}
		    else{
			ry2+=d[i];
		}
	}
		if(sd==ry){//同排 
		    if(sd2>="A"&&sd2<="C"&&ry2>="A"&&ry2<="C")//同侧 
	    {
					if(sd2=="A"&&ry2=="B"){//相邻 
					    cout<<"1111";
					    return 0;
					}
					else if(sd2=="B"&&ry2=="C"){
						cout<<"1111";
						return 0;
					}
					else if(sd2=="B"&&ry2=="A"){
						cout<<"1111";
						return 0;
					}
					else if(sd2=="C"&&ry2=="B"){
							cout<<"1111";
					return 0;
					}
					else{
						cout<<"1110";
					}
    	}	
	   		else if(sd2>="D"&&sd2<="E"&&ry2>="D"&&ry2<="E")//同侧且相邻 
	   			{
	   	   		 cout<<"1111";
				return 0;
    			}
    		else
			{
    			cout<<"1100";
			}
    }
             
        else{
    	cout<<"1000";
        return 0;
	    }
	}
	else
	{
		cout<<"0000";
		return 0;
	}

	
	return 0;
}
