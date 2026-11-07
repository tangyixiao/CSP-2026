#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a=true,b=true,c=false,d=true;
	for(int i=0;i<2;i++)
	{
		if(c1[i]!=c2[i])a=false;
	}
	if(!a)
	{
		cout<<"0000\n";
		return 0;
	}
	for(int i=0;i<2;i++)
	{
		if(s1[i]!=s2[i])b=false;
	}
	if(!b)
	{
		cout<<"1000\n";
		return 0;
	}
	if((s1[2]>='A' && s1[2]<='C')&&(s2[2]>='A' && s2[2]<='C') )
		c=true;
	if((s1[2]>='D' && s1[2]<='C')&&(s2[2]>='A' && s2[2]<='F') )
		c=true;
	if(!c)
	{
		cout<<"1100\n";
		return 0;
	}
	if(abs(s1[2]-s2[2])!=1)d=false;
	if(!d)
	{
		cout << "1110\n";
		return 0;
	}
	cout << "1111\n";
	return 0;
}
