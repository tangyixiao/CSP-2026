#include<bits/stdc++.h>
using namespace std;
int a1,b1;
string a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) cout<<"1";
	else {
		cout<<"0000";
		return 0;
	}
	if(a2[0]==b2[0]&&a2[1]==b2[1]) cout<<"1";
	else {
		cout<<"000";
		return 0;
	}
	if((a2[2]>='A'&&a2[2]<='C'&&b2[2]>='A'&&b2[2]<='C')||(a2[2]>='D'&&a2[2]<='F'&&a2[2]>='D'&&a2[2]<='F')){
		cout<<"1";
	}
	else {
		cout<<"00";
		return 0;
	}
	int a3=(a2[1]-'0')*10+(a2[2]-'0');
	int b3=(b2[1]-'0')*10+(b2[2]-'0');
	if((a3==b3+1)||(a3==b3-1)) cout<<"1";
	else cout<<"0";
	return 0;
}
