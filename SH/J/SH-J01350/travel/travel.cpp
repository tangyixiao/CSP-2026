#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	bool sa=true;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
		if((b[0]==d[0])&&(b[1]==d[1]))
	    {
	    	cout<<"1";
	    	char x=b[2],y=d[2];
	    	if((x<='C')&&(y<='C') || (x>='D')&&(y>='D'))
	    	{
	    		cout<<"1";
	    		int s1=abs(x-y);
	    		if(s1==1)
	    		{
	    			cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else cout<<"00";
    	}
    	else
    	{
    		cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
}
