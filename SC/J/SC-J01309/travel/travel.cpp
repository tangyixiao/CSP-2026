#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int num1,num2,num3,num4;
int b1,b2;
int f(string x){
	int lin=0;
	lin=(x[0]-'0')*10+(x[1]-'0');
	return lin;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	num1=f(c1);
	num2=f(s1);
	num3=f(c2);
	num4=f(s2);
	b1=s1[2]-'A';
	b2=s2[2]-'A';
	if(num1==num3)cout<<1;
		else cout<<0;
	if(num1==num3  && num2==num4)cout<<1;
		else cout<<0;
	if(num1==num3  && num2==num4&& ((b1<='C'-'A'&&b2<='C'-'A')||(b1>'C'-'A'&&b2>'C'-'A')) )cout<<1;
		else cout<<0;
	if(num1==num3  && num2==num4&& ((b1<='C'-'A'&&b2<='C'-'A')||(b1>'C'-'A'&&b2>'C'-'A')) ){
	  	if(abs(b1-b2)==1)cout<<1;
	  	else cout<<0;
	}
	else cout<<0;
	return 0;
}