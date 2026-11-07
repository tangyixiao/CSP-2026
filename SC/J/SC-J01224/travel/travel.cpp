#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,m,n;
	cin>>a>>m>>b>>n;
	if(a==b)
	cout<<"1";
	else
	{
	cout<<"0000";
	return 0;	
	}
	if(m[0]==n[0]&&m[1]==n[1])
	cout<<"1";
	else
	{
	cout<<"000";
	return 0;	
	}
	if((m[2]<='C'&&n[2]<='C')||(m[2]>'C'&&n[2]>'C'))
	cout<<"1";
	else
	{
		cout<<"00";
		return 0;
	}
	if(int(m[2]+1)==n[2]||int(n[2]+1)==m[2])
	cout<<"1";
	else
	cout<<"0";
	return 0;
}