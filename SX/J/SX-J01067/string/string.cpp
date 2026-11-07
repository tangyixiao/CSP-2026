#include<bits/stdc++.h>
using namespace std;
int main()
{
	string c1,s1,c2,s2;
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

	return 0;
}
