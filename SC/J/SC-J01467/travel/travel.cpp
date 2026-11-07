#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n1,n2,x1,x2;
	string m1,m2;
	cin>>n1>>m1>>n2>>m2;
	if(n1==n2)
	{
		cout<<"1";
		x1=m1[0]*10+m1[1];
		x2=m2[0]*10+m2[1];
		int r1=(int)m1[2],r2=(int)m2[2];
		if(x1==x2)
		{
			cout<<"1";
			int e=min(r1,r2);
	    	if(e==65 || e==66 || e==68)
	    	{		
		    	cout<<"1";
		    	if(r1+r2-2*e==1)
		    	{
		    		cout<<"1";
				}
				else
				{
					cout<<"0";
					return 0;
				}
			}
			else
			{
				cout<<"00";
				return 0;
			}
	    }
		else
		{
			cout<<"000";
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