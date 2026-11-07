#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string a,d;
string q,w;
int j,k;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		for(int i=1;i<=2;i++)
		{
			a+s1[i];
			d+s2[i];
		}
		if(a==d)
		{
			cout<<"1";
			q=s1[2];
			w=s2[2];
			if(q=="A")
			{
				j=1;
			}
			else if(q=="B")
			{
				j=2;
			}
			else if(q=="C")
			{
				j=3;
			}
			else if(q=="D")
			{
				j=4;
			}
			else if(q=="F")
			{
				j=5;
			}
			if(w=="A")
			{
				k=1;
			}
			else if(w=="B")
			{
				k=2;
			}
			else if(w=="C")
			{
				k=3;
			}
			else if(w=="D")
			{
				k=4;
			}
			else if(w=="F")
			{
				k=5;
			}
			
			if(((j<=3)&&(k<=3))||((j>=4)&&(k>=4)))
			{
				cout<<"1";
				if(((j+1)==k)||((j-1)==k))
				{
					cout<<"1";
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
	return 0; 
} 