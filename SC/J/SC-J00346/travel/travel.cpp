#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	bool e=true;
	cin>>a>>b>>c>>d;
	int n=(a[0]-'0')*10+(a[1]-'0');
	int m=(c[0]-'0')*10+(c[1]-'0');
	if(n==m)cout<<'1';
	else{
		cout<<"0000";
		return 0;
	}
	n=(b[0]-'0')*10+(b[1]-'0');
	m=(d[0]-'0')*10+(d[1]-'0');
	if(n==m)cout<<'1';
	else{
		cout<<"000";
		return 0;
	}
	char x=b[2],y=d[2];
	if((x=='D'&&y=='F')||(x=='F'&&y=='D'))cout<<"11";
	else if((x=='A'&&y=='C')||(x=='C'&&y=='A'))cout<<"10";
	else if((x=='A'&&y=='B')||(x=='B'&&y=='A'))cout<<"11";
	else if((x=='B'&&y=='C')||(x=='C'&&y=='B'))cout<<"11";
	else cout<<"00";
	return 0;
}