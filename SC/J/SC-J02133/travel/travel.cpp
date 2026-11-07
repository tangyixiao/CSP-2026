#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int t1=0;
	int t2=0;
	int s1=0;
	int s2=0;
	cin>>a>>b>>c>>d;
	t1=10*(a[0]-'0')+a[1]-'0';
    t2=10*(c[0]-'0')+c[1]-'0' ; 
	s1=10*(b[0]-'0')+b[1]-'0';
	s2=10*(d[0]-'0')+d[1]-'0' ; 
	if(t1==t2)
	{
		cout<<1;
		if(s2==s1)
		{
			cout<<1;
			if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='B')||(b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')||(b[2]=='A'&&d[2]=='C')||(b[2]=='C'&&d[2]=='A'))
			{
				cout<<1;
				if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='B')||(b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')) 
				{
					cout<<1; 
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				cout<<"00";
			}
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
fclose(stdin);
fclose(stdout); 
	
}