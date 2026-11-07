#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	int b1=(b[0]-'0')*10+b[1]-'0';
	int d1=(d[0]-'0')*10+d[1]-'0';
	if(b1!=d1){
		cout<<"1000";
		return 0;
	}
	char e=b[2],f=d[2];
	if((e>='A'&&e<='C'&&f>='D'&&f<='F')||(f>='A'&&f<='C'&&e>='D'&&e<='F')){
		cout<<"1100";
		return 0;
	}
	if(((e>='A'&&e<='C'&&f>='A'&&f<='C')&&abs((e-'A')-(f-'A'))==1)||(e=='D'&&f=='F')||(e=='F'&&f=='D')){
		cout<<"1111";
		return 0;
	}
	else{
		cout<<"1110";
		return 0;
	}
} 
