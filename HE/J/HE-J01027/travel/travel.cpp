#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool b1,b2,b3,b4;
int main()
{
//	/*
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//	*/
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		b1=true;
	if(b1&&(s1[0]==s2[0]&&s1[1]==s2[1]))
		b2=true;
	bool bs1=(s1[2]<='C'),bs2=(s2[2]<='C');
	if(b2&&(bs1==bs2))
		b3=true;
	if(b3)
	{
		if(bs1==true&&bs2==true)
		{
			if(abs(s1[2]-s2[2])==1)
				b4=true;
		}
		if(bs1==false&&bs2==false)
		{
			if(s1[2]!=s2[2])
				b4=true;
		}
	}
	if(b1)
		cout<<1;
	else
		cout<<0; 
	
	if(b2)
		cout<<1;
	else
		cout<<0; 
	
	if(b3)
		cout<<1;
	else
		cout<<0;
		 
	if(b4)
		cout<<1;
	else
		cout<<0; 
	return 0;
}
