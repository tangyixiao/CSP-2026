#include<bits/stdc++.h>
using namespace std;
int a1,b1,a2,b2;
char a3,b3;
string o;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>o;
	a1=int(o[0]-'0')*10+int(o[1]-'0');
	cin>>o;
	a2=int(o[0]-'0')*10+int(o[1]-'0');
	a3=o[2];
	cin>>o;
	b1=int(o[0]-'0')*10+int(o[1]-'0');
	cin>>o;
	b2=int(o[0]-'0')*10+int(o[1]-'0');
	b3=o[2];
	if(a1!=b1){
		cout<<"0000";
		return 0;
	}
	if(a2!=b2){
		cout<<"1000";
		return 0;
	}
	if((a3<='C'&&b3>'C')||(a3>'C'&&b3<='C')){
		cout<<"1100";
		return 0;
	}
	if(abs(a3-b3)!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}