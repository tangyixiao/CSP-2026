#include <iostream> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string m,n,x,y;
	cin>>m>>n>>x>>y; 
	if(m[0]==x[0] && m[1]==x[1])
	{
		cout<<'1';
		
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(n[0]==y[0] && n[1]==y[1])
	{
		cout<<'1';
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((n[2]=='A'||n[2]=='B'||n[2]=='C')&&(y[2]=='A'||y[2]=='B'||y[2]=='C'))
	{
		cout<<'1';
	}
	else if((n[2]=='D'||n[2]=='E')&&(y[2]=='D'||y[2]=='E'))
	{
		cout<<'1';
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(n[2]==y[2]+1 || n[2]==y[2]-1)
	{
		cout<<'1';
	}
	else
	{
		cout<<'0';
	}
	
 } 
