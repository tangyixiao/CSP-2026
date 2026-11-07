#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]=='0'){
			a1=int(b[1]-'0');
		}else{
			a1=int(b[1]-'0')+10;
		}
		if(d[0]=='0'){
			b1=int(d[1]-'0');
		}else{
			b1=int(d[1]-'0')+10;
		}
		if(a1==b1){
			cout<<1;
			if((b[2]=='F'&&d[2]=='D')||(d[2]=='F'&&b[2]=='D')||(b[2]=='C'&&d[2]=='B')||(d[2]=='C'&&b[2]=='B')||(b[2]=='A'&&d[2]=='B')||(d[2]=='A'&&b[2]=='B')||(b[2]=='A'&&d[2]=='C')||(b[2]=='C'&&d[2]=='A')){
				cout<<1;
				if((b[2]=='F'&&d[2]=='D')||(d[2]=='F'&&b[2]=='D')||(b[2]=='C'&&d[2]=='B')||(d[2]=='C'&&b[2]=='B')||(b[2]=='A'&&d[2]=='B')||(d[2]=='A'&&b[2]=='B')){
					cout<<1;
				}else{
					cout<<0;
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
}