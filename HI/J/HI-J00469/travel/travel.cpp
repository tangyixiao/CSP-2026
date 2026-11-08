#include<bits/stdc++.h> 
using namespace std;
string cr,sr,cx,sx;
string s="0000";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;//¡Ω»À≥µ∆±
	if(cr==cx)
	{
	    s[0]='1';
	    if(sr[0]==sx[0]&&sr[1]==sx[1]) 
	    {
	   	s[1]='1';
	   	if(((sr[2]=='A'||sr[2]=='B'||sr[2]=='C')&&(sx[2]=='A'||sx[2]=='B'||sx[2]=='C'))||((sr[2]=='D'||sr[2]=='F')&&(sx[2]=='D'||sx[2]=='F')))
	   	{
	   	    s[2]='1';
	  		if((sr[2]=='A'&&sx[2]=='B')||(sx[2]=='A'&&sr[2]=='B')||(sr[2]=='B'&&(sx[2]=='A'||sx[2]=='C'))||(sr[2]=='C'&&sx[2]=='B')||(sx[2]=='C'&&sr[2]=='B')||(sx[2]=='B'&&(sr[2]=='A'||sr[2]=='C'))||(sr[2]=='F'&&sx[2]=='D')||(sr[2]=='D'&&sx[2]=='F'))
	   		{
	    			s[3]='1';
				}
			}
		}
	}
	cout<<s;
	return 0;
}
