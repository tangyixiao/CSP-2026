#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,ans,g,h;
char e,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)ans+="1";
	else{
		cout<<"0000";
		return 0;
	}
	g=""+b[0]+b[1],h=""+d[0]+d[1];
	if(g==h)ans+="1";
	else{
		cout<<"1000";
		return 0;
	}
	e=b[2],f=d[2];
	e=char(int(e)+32),f=char(int(f)+32);
	if((e=='a'&&(f=='b'||f=='c'))||(e=='b'&&(f=='a'||f=='c'))||(e=='c'&&(f=='a'||f=='b'))||(e=='d'&&f=='f')||(e=='f'&&f=='d'))ans+="1";
	else{
		cout<<"1100";
		return 0;
	}
	if((e=='a'&&f=='b')||(e=='b'&&f=='a')||(e=='b'&&f=='c')||(e=='c'&&f=='b')||(e=='d'&&f=='f')||(e=='f'&&f=='d')){
		cout<<"1111";
	}else{
		cout<<"1110";
	}
	return 0;
}