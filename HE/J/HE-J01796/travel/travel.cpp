#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
char x,y;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>x>>c>>d>>y;
	if(a==c)
    {
    	cout<<1;
	}
	else
    {
    	cout<<0;
	}
	if(b==d&&a==c)
    {
    	cout<<1;
	}
	else
    {
    	cout<<0;
	}
	if(((x<='C'&&y<='C')||(x>'C'&&y>'C'))&&b==d&&a==c)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(b==d&&abs((int)x-(int)y)==1)
    {
    	if((x=='C'&&y=='D')||(x=='D'&&y=='C'))
    	{
    		cout<<0;
		}
		else
	    {
	    	cout<<1;
		}
    	
	}
	else
    {
    	cout<<0;
	}
	fclose(stdin);fclose(stdout);
}
