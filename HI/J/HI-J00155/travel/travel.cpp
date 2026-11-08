#include<bits/stdc++.h>
using namespace std;
string c[2],s[2];
struct pfl{
	bool fl;
	bool sDF;
};
pfl f(){
	if(s[0][2]=='D'||s[0][2]=='F'){
		if(s[1][2]=='D'||s[1][2]=='F') return {1,1};
		else return {0,1};
	}
	else{
		if(s[1][2]=='D'||s[1][2]=='F') return {0,0};
		else return {1,0};
	}
}
int main(){
	freopen("travel.in",r,stdin);
	freopen("travel.out",w,stdout);
	cin>>c[0]>>s[0]>>c[1]>>s[1];
	if(c[0]==c[1]){
		cout<<1;
		if(s[0][0]==s[1][0]&&s[0][1]==s[1][1]){
			cout<<1;
			pfl x=f();
			if(x.fl){
				cout<<1;
				if(x.sDF&&(s[1][2]=='D'||s[1][2]=='F')||(!x.sDF&&(s[1][2]!='D'&&s[1][2]!='F'&&(!(s[0][2]=='A'&&s[1][2]=='C'||(s[0][2]=='C'&&s[1][2]=='A')))))){
					cout<<1;
				}else{cout<<0;}
			}else{cout<<"00";}
		}else{cout<<"000";}
	}else{cout<<"0000";}
	return 0;
}
