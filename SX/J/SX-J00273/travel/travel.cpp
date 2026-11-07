#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a,b,c,d,s;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c)
		s+="1";
	else 
	{
		cout<<"0000";
		return 0;
	}
	if(b.substr(0,2)==d.substr(0,2))
		s+="1";
	else 
	{
		cout<<"1000";
		return 0;
	}
	if(b[2]<='F'&&b[2]>='D'&&d[2]>='A'&&d[2]<='C'||d[2]<='F'&&d[2]>='D'&&b[2]<='C'&&b[2]>='A')     
	{
		cout<<"1100";
		return 0;
	} else
		s+="1";
	if(b[2]-d[2]==1||b[2]-d[2]==-1)
		s+="1";
	else 
	{
		cout<<"1110";
		return 0;
	}
	cout<<s;
	return 0;
}
