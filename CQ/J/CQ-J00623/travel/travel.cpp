#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	string l="",l1="";
	l+=b[0],l+=b[1];
	l1+=d[0],l1+=d[1];
	char r=b[2],r1=d[2];
	if(l==l1){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((r=='A'&&(r1=='B'||r1=='C'))||(r=='B'&&(r1=='C'||r1=='A'))||(r=='C'&&(r1=='A'||r1=='B'))||(r=='D'&&r1=='F')||(r=='F'&&r1=='D')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if((r=='A'&&r1=='B')||(r=='B'&&(r1=='C'||r1=='A'))||(r=='C'&&r1=='B')||(r=='F'&&r1=='D')||(r=='D'&&r1=='F')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
