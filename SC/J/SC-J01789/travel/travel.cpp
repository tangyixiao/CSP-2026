#include<bits/stdc++.h>
using namespace std;
char r,x;
string s1,s2;
int c1,c2,s11,s22;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	s11=(s1[0]-'0')*10+(s1[1]-'0');
	s22=(s2[0]-'0')*10+(s2[1]-'0');
	r=s1[2];
	x=s2[2];
	if(c1==c2){
		cout<<1;
		if(s11==s22){
			cout<<1;
			if(r>='A'&&r<='C'&&x>='A'&&x<='C'){
				cout<<1;
				if((abs(r-x)==1)&&!(r=='D'&&x=='C')&&!(x=='D'&&r=='C')){
					cout<<1;
				}else cout<<"0";
			}else if((r=='D'&&x=='F')||(x=='D'&&r=='F')){
				cout<<1;
				if((abs(r-x)==1)&&!(r=='D'&&x=='C')&&!(x=='D'&&r=='C')){
					cout<<1;
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}