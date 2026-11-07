#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=int(c1[0]-'0')*10+int(c1[1]-'0');
	a2=int(c2[0]-'0')*10+int(c2[1]-'0');
	if(a!=a2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	b=int(s1[0]-'0')*10+int(s1[1]-'0');
	b2=int(s2[0]-'0')*10+int(s2[1]-'0');
	if(b!=b2){
		cout<<"000";
		return 0;
	}cout<<1;
	if(s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A'
	||s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'
	||s1[2]=='C'&&s2[2]=='B'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}