#include<bits/stdc++.h>
using namespace std;
string c1,c2,a1,a2;
int main(){
	cin>>c1>>a1>>c2>>a2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int b1[3],b2[3];
	for(int i=0;i<a1.length();i++){
		b1[i]=a1[i]-'0'+'0';
	}
	for(int i=0;i<a2.length();i++){
		b2[i]=a2[i]-'0'+'0';
	}
	if(b1[0]==b2[0]&&b2[1]==b1[1]) cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	if(b1[2]>='A'&&b1[2]<='C'&&b2[2]>='A'&&b2[2]<='C'||b1[2]>='D'&&b1[2]<='F'&&b2[2]>='D'&&b2[2]<='F')cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if(b1[2]=='A'&&b2[2]=='B'||b1[2]=='B'&&b2[2]=='A'||b1[2]=='B'&&b2[2]=='C'||b1[2]=='C'&&b2[2]=='B'||
	b1[2]=='D'&&b2[2]=='F'||b1[2]=='F'&&b2[2]=='D') cout<<1;
	else cout<<0;
	return 0;
} 
