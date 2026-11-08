#include <bits/stdc++.h>
using namespace std;
bool x(int a,string b,string c)
{
	if(a==1)
	{
		string x1,x2;
		for(int i=0;i<=1;i++)
		{
			x1+=b[i]; 
			x2+=b[i];
		}
		if(x1==x2)
		{
			return 1;
		}
		return 0;
	}
	if(a==2)
	{
		if(((b[2]=='D')||(b[2]=='F'))&&((c[2]=='D')||(c[2]=='F')))
		{
			return 1;
		}
		else if(((b[2]=='A')||(b[2]=='B'))&&((c[2]=='A')||(c[2]=='B')))
		{
			return 1;
		}
		else if(((b[2]=='c')||(b[2]=='B'))&&((c[2]=='C')||(c[2]=='B')))
		{
			return 1;
		}
		return 0;
	}
	if(a==3)
	{
		if((b[2]+1==c[2])||(b[2]-1==c[2]))
		{
			return 1;
		}
		return 0;
	}
}
int main()
{
	freopen("travelin","r",stdin);
	freopen("travelout","w",stdout);
	string s1,s2;
	int c1,c2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2)
	{
		cout << 1;
		if(x(1,s1,s2))
	    {
	    	cout << 1;
	        if(x(2,s1,s2))
	        {
		        cout << 1;
		        if(x(3,s1,s2))
	            {
		            cout << 1;
	            }
	            else
	            {
		            cout << 0;
	            }
	        }
	        else
	        {
		        cout << 00;
	        }
	    }
	    else
	    {
		    cout << 000;
    	}
 	} 
	else
	{
		cout << 0000;
	}
	return 0;
}
