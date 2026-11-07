#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	string x="",y="";
	x+=b[0];
	x+=b[1];
	y+=d[0];
	y+=d[1];
	char n=b[2],m=d[2];
	if(a==c){
		cout<<'1';
		if(x==y){
			cout<<'1';
			if(x==y){
				if(m>n){
					swap(m,n);
				}
				if((m<='C'&&n<='C')||(m>='D'&&n>='D')){
					cout<<'1';
				}else{
					cout<<'0';
				}
				if((m=='A'&&n=='B')||(m=='B'&&n=='C')||(m=='D'&&n=='F')){
					cout<<'1';
				}else{
					cout<<'0';
				}
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
