#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool check(){
	if(a!=c)return false;
	if(b[0]!=d[0]||b[1]!=d[1])return false;
	if((b[2]=='D'||b[2]=='F')&&(d[2]!='D'&&d[2]!='F'))return false;
	if((d[2]=='D'||d[2]=='F')&&(b[2]!='D'&&b[2]!='F'))return false;
	return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	cout<<bool(a==c)<<bool(a==c&&b[0]==d[0]&&b[1]==d[1]);
	cout<<check()<<bool(check()&&(b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D'||b[2]=='C'&&d[2]=='B'||b[2]=='B'&&d[2]=='C'||b[2]=='B'&&d[2]=='A'||b[2]=='A'&&d[2]=='B'));
	return 0;
}