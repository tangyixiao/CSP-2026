#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int c1,c2;
	cin>>a>>b>>c>>d;
	if(a==c){
	cout<<"1";
	if(b[1]==d[1]&&b[0]==d[0])cout<<"1";
	else cout<<"0"<<"0";
	if(b[2]=='A'||b[2]=='B'||b[2]=='C')c1=1;
	if(d[2]=='A'||d[2]=='B'||d[2]=='C')c2=1;
	if(b[2]=='D'||b[2]=='F')c1=2;
	if(d[2]=='D'||d[2]=='F')c2=2;
	if(c1==c2){
	cout<<"1";}
	if(c1==1&&abs(b[2]-d[2])==1)cout<<"1";
	else if(c1==2&&abs(b[2]-d[2])==2)cout<<"1";
	else cout<<"0";
	}
	else cout<<"0"<<"0"<<"0"<<"0";
	return 0;
}