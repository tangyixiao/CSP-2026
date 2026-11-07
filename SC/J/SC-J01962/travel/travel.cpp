#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
char r,x;
string rp,xp;

bool check(){
	if(r=='C'&&x=='B'){
		return 1;
	}
	if(r=='B'){
		return 1;
	}
	if(r=='A'&&x=='B'){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	r=s1[2],x=s2[2];
	rp=s1[0]+s1[1],xp=s2[0]+s2[1];
	if(c1==c2){
		cout<<1;
		if(rp==xp){
			cout<<1;
			if(r<='C'&&r>='A'&&x<='C'&&r>='A'){
				cout<<1;
				if(check()){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(r<='F'&&r>='D'&&x<='F'&&r>='D'){
				cout<<"11";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	return 0;
}