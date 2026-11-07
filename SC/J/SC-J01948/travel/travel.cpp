#include<iostream>
#include<algorithm>
#include<cmath>
#include<stack>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
string A1,B1,A2,B2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	IOS;
	cin>>A1>>B1>>A2>>B2;
	if(A1==A2) cout<<1;
	else
	{
		cout<<"0000"<<'\n';
		return 0;
	}
	if(B1[0]==B2[0]&&B1[1]==B2[1]) cout<<1;
	else 
	{
		cout<<"000"<<'\n';
		return 0;
	}
	if((B1[2]<='C'&&B2[2]<='C')||(B1[2]>'C'&&B2[2]>'C')) cout<<1;
	else
	{
		cout<<"00"<<'\n';
		return 0;
	}
	if(abs(int(B1[2]-B2[2]))==1) cout<<1<<'\n';
	else cout<<0<<'\n';
	return 0;
}