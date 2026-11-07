#include<bits/stdc++.h>
using namespace std;
string a,ab,x,xy;
bool k[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>ab>>x>>xy;
	if(a.size()>2||x.size()>2||ab.size()>3||xy.size()>3)
	{
		cout<<"0000";
		return 0; 
	 } 
	if(a==x)k[1]=1;
	else    k[1]=0;
	if(k[1]==1&&ab[0]==xy[0]&&ab[1]==xy[1])k[2]=1;
	else                          k[2]=0;
	if(k[1]==1&&k[2]==1&&((ab[2]<='F'&&ab[2]>='D'&&xy[2]<='F'&&xy[2]>='D')||(ab[2]<='c'&&ab[2]>='A'&&xy[2]<='C'&&xy[2]>='A')))k[3]=1;
	else k[3]=0;
	if(k[1]==1&&k[2]==1&&k[3]==1)
	{
		if(ab[2]=='D'||ab[2]=='F')
		{
			if(ab[2]=='D'&&xy[2]=='F')k[4]=1;
			else if(ab[2]=='F'&&xy[2]=='D')
			k[4]=1;
			else
			k[4]=0;
		}
		else
		{
			if(ab[2]=='C'&&xy[2]=='B')
			k[4]=1;
			else if((ab[2]=='B'&&xy[2]=='A')||(ab[2]=='B'&&xy[2]=='C'))k[4]=1;
			else if(ab[2]=='A'&&xy[2]=='B')k[4]=1;
			else k[4]=0;
		}
	}
	else
	k[4]=0;
	cout<<k[1]<<k[2]<<k[3]<<k[4];
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
