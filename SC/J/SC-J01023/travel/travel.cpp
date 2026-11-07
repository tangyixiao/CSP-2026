#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,p1,p2;
	char k1,k2;
	cin>>c1>>p1>>k1>>c2>>p2>>k2;
	if(c1==c2){
		cout<<1;
		if(p1==p2){
			cout<<1;
			if((k1<='C'&&k2<='C')||(k1>'C'&&k2>'C')){
				cout<<1;
				if(!((k1=='A'&&k2=='C')||(k2=='A'&&k1=='C')))cout<<1;
				else cout<<"0";
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