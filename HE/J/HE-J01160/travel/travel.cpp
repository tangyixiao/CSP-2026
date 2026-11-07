#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,b,c,d,e;
	char a2,b2,c2,d2,e2;
	cin>>a>>b>>c>>d>>e>>a2>>b2>>c2>>d2>>e2;
	if(e2<e) swap(e,e2);
	if(a==a2&&b==b2){
		cout<<1;
		if(c==c2&&d==d2){
			cout<<1;
			if((e<='C'&&e2<='C')||(e>'C'&&e2>'C')){
				cout<<1;
				if(e=='A'&&e2=='C'){
					cout<<0;
				}
				else{
					cout<<1;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
