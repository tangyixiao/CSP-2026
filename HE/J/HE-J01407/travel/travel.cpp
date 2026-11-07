#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int o,o1,o2,o3;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		o=1;
	}
	else
	{
		o=0;
	}
	cout<<o;
	if(o==1&&b[1]==d[1]&&b[0]==d[0])
	{
		o1=1;
	}
	else
	{
		o1=0;
	}
	cout<<o1;
	if(o==1&&o1==1)
	{
		if(b[2]=='A'&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))
		{
			o2=1;
		}
		else if(b[2]=='B'&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))
		{
			o2=1;
		}
		else if(b[2]=='C'&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))
		{
			o2=1;
		}
		else if(b[2]=='D'&&(d[2]=='D'||d[2]=='F'))
		{
			o2=1;
		}
		else if(b[2]=='F'&&(d[2]=='D'||d[2]=='F'))
		{
			o2=1;
		}
		else
		{
			o2=0;
		}
	}
	else
	{
		o2=0;
	}
	cout<<o2;
	if(o==1&&o1==1&&o2==1)
	{
		if(b[2]=='A'&&d[2]=='B')
		{
			o3=1;
		}
		else if(b[2]=='B'&&(d[2]=='A'||d[2]=='C')) 
		{
			o3=1;
		}
		else if(b[2]=='C'&&(d[2]=='B'))
		{
			o3=1;
		}
		else if(b[2]=='D'&&d[2]=='F')
		{
			o3=1;
		}
		else if(b[2]=='F'&&d[2]=='D')
		{
			o3=1;
		}
	}
	cout<<o3;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 

