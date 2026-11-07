#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
/*	ios::sync_with_stdio(false);
	cin.tie(0);*/
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		char e,f,g,h;
		e=b[0],f=b[1],g=d[0],h=d[1];
		if(e==g&&f==h){
			cout<<1;
			char x=b[2],y=d[2];
			if(x=='A'&&y=='B'){
				cout<<11;
				return 0;
			}else if(x=='B'&&y=='A'){
				cout<<11;
				return 0;
			}else if(x=='A'&&y=='C'){
				cout<<10;
				return 0;
			}else if(x=='C'&&y=='A'){
				cout<<10;
				return 0;
			}else if(x=='B'&&y=='C'){
				cout<<11;
				return 0;
			}else if(x=='C'&&y=='B'){
				cout<<11;
				return 0;
			}else if(x=='D'&&y=='F'){
				cout<<11;
				return 0;
			}else if(x=='F'&&y=='D'){
				cout<<11;
				return 0;
			}
			else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
