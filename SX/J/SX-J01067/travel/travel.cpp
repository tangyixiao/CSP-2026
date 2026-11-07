#include<bits/stdc++.h>
using namespace std;
int main()
{
	string c1,s1,c2,s2,a1;
	cin>>c1>>s1>>c2>>s2;
	int a,b,c,d;
	if(c1==c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	for(int i=0;i<3;i++)
	{
		if(s1[i]>='0'&&s1[i]<='9')
		{
			b=a;
			a=s1[i]-'0';
		}
		if(s2[i]>='0'&&s2[i]<='9')
		{
			d=c;
			c=s1[i]-'0';
		}
	}
	if(a==c&&b==d)
	{
		cout<<"1";
	}
	else
    {
    	cout<<"0";
	}
	for(int i=0;i<3;i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			a=s1[i]-'A';
		}
		if(s2[i]>='A'&&s2[i]<='Z')
		{
			b=s2[i]-'A';
		}
    }
    if(a<=2&&b==1||b==2||b==0)
    {
      cout<<"1";c=1;
	}
	else if(a>2&&b==3||b==4)
	{
		cout<<"1";c=1;
	}
	else
	{
		cout<<"0";c=0;
	}
    if(c==1)
    {
    	if(a<=2)
    	{
    		if(a==0||a==2&&b==1) cout<<"1";
    		else if(a==1&&b==0||b==2) cout<<"1";
    		else cout<<"0";
		}
		else
		{
			if(a==3&&b==4) cout<<"1";
			else if(a==4&&b==3) cout<<"1";
			else cout<<"0";
		}
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
