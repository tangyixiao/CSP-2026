#include<bits/stdc++.h>
using namespace std;
string a,c,b,d;
int A,C,B,D; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a>>c>>b>>d;
	for(int i=0;i<=1;i++)
	{
		A*=10;
		A+=a[i];
		B*=10;
		B+=b[i];
		C*=10;
		C+=c[i];
		D*=10;
		D+=d[i];
	}
	char ccc=c[2],ddd=d[2];
	if(A==B)cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	 } 
	if(C==D)cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	if((ccc=='A'||ccc=='B'||ccc=='C')&&(ddd=='A'||ddd=='B'||ddd=='C'))cout<<"1";
	else if((ccc=='D'||ccc=='F')&&(ddd=='D'||ddd=='F'))
	{
		cout<<"11";
		return 0;
	}
	else cout<<0;
	if(ccc!='D'&&ccc!='F'&&ddd!='D'&&ddd!='F'&&abs(int(ccc)-int(ddd))==1)cout<<1;
	else cout<<0;
	return 0;
 } 
