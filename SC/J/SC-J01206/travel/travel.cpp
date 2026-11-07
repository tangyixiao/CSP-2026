#include<bits/stdc++.h>
using namespace std;
string r,x;
char rc[5],xc[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r;
	for(int i=1;i<=3;i++){
		cin>>rc[i];
	}cin>>x;
	for(int i=1;i<=3;i++){
		cin>>xc[i];
	}
	if(r==x){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}if(xc[1]==rc[1]&&xc[2]==rc[2]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}if(xc[3]<='C'&&rc[3]<='C'){
		cout<<"1";
		if(xc[3]+'1'==rc[3]||rc[3]+'1'==xc[3]){
			cout<<"1";
		}else{
			cout<<"0";
			
		}
	}else if(xc[3]<='C'&&rc[3]>'C'){
		cout<<"00";return 0;
		if(xc[3]+'1'==rc[3]||rc[3]+'1'==xc[3]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else if(xc[3]>'C'&&rc[3]<='C'){
		cout<<"00";return 0;
		if(xc[3]+'1'==rc[3]||rc[3]+'1'==xc[3]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}if(xc[3]>='D'&&rc[3]>='D'){
		cout<<"1";
		if(xc[3]+'1'==rc[3]||rc[3]+'1'==xc[3]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	return 0;
}