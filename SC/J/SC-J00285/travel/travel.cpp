#include<iostream>
#include<string>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string z="ABCGDF";
	int rc,xc,g,gm;
	string rz,xz;
	cin>>rc>>rz>>xc>>xz;
	//cout<<rc<<rz<<xc<<xz;
///////////////////////////////////////////
	if(rc==xc)
	{
		cout<<"1";
	}else
	{
		cout<<"0";
	}
	
/////////////////////////////////////////////	
	if(int(rz[1])==int(xz[1]))
	{
		cout<<"1";
	}else
	{
		cout<<"0";
	}
//////////////////////////////////////////	
	int o ,o1;
	if(rz[2]=='A'||rz[2]=='B'||rz[2]=='C')
	{
		o=1;
	}else 
	{
		o=0;
	}
		
	if(xz[2]=='A'||xz[2]=='B'||xz[2]=='C')
	{
		o1=1;
	}else 
	{
		o1=0;
	}
	if(o==o1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
	///////////////////////
	int i=0;
	for(;i<10;i++)
	{
		if(rz[2]==z[i])
		break;
		
	}if(z[i-1]==xz[2]||z[i+1]==xz[2])
	{
		cout<<"1";
	}
	else{
		cout<<"0";
	return 0;}
}