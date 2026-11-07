#include <iostream>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    bool s1=0,s2=0,s3=0,s4=0;
    if (a==c)
    {
	    s1=1;
	    string n,m;
	    n+=b[0];
	    n+=b[1];
	    m+=d[0];
	    m+=d[1];
	    if (n==m)
	    {
	    	s2=1;
	    	string h,j;
	    	int x,y;
	    	if (b[2]=='A' || b[2]=='B' || b[2]=='C')
	    	{
	    		x=0;
			}
			else x=1;
			if (d[2]=='A' || d[2]=='B' || d[2]=='C')
	    	{
	    		y=0;
			}
			else y=1;
			if (x==y && x==1)
			{
				s3=1;
				s4=1;
			}
			else if (x==y && x==0)
			{
				s3=1;
				if (b[2]=='A' && d[2]=='B') s4=1;
				else if (b[2]=='B' && d[2]=='A') s4=1;
				else if (b[2]=='B' && d[2]=='C') s4=1;
				else if (b[2]=='C' && d[2]=='B') s4=1;
			}
		}
	}
	cout<<s1<<s2<<s3<<s4;
    return 0;
}