#include<iostream>
using namespace std;
int dx(string s){
	int n=s[0]-'0';
	int nm=s[1]-'0';
	return (n*10+nm);
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	int cn=dx(c);int dn=dx(d);
	char cm=c[2];char dm=d[2];
	if(a==b){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(a==b&&cn==dn){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(a==b&&cn==dn&&(cm<='C'&&dm<='C')||(cm>='D'&&dm>='D')){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(((cm<='C'&&dm<='C')||(cm>='D'&&dm>='D'))&&abs(int(cm)-int(dm))==1&&a==b&&cn==dn){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
