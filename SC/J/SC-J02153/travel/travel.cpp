#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int abs(int n){
	return (n<0)?-n:n;
}
bool nears(string a,string b){
	int n1=(a[0]>'0')?(a[0]-'0')*10+(a[1]-'0'):(a[1]-'0');
	int n2=(b[0]>'0')?(b[0]-'0')*10+(b[1]-'0'):(b[1]-'0');
	if(abs(n1-n2)<=1&&(abs(a[2]-b[2])<=1||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D')))return true;
	return false;
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	cout<<(c1==c3)?"1":"0";
	string n1=c2.substr(0,2);
	string n2=c4.substr(0,2);
	cout<<(n1==n2&&(c1==c3))?"1":"0";
	cout<<(n1==n2&&(c1==c3)&&((c2[2]<='C'&&c4[2]<='C')||(c2[2]>='D'&&c4[2]>='D')))?"1":"0";
	cout<<(((c2[2]<='C'&&c4[2]<='C')||(c2[2]>='D'&&c4[2]>='D'))&&nears(c2,c4)&&(n1==n2)&&(c1==c3))?"1":"0";
	return 0;
}