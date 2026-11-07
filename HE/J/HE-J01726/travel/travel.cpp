#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char hup[5],z[5];
	int q,d,zm,zm1;
	cin>>q>>hup>>d>>z;
	if(q==d){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(hup[0]==z[0]&&hup[1]==z[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(hup[2]=='A'||hup[2]=='B'||hup[2]=='C'){
		zm=1;
	}else{
		zm=2;
	}
	if(z[2]=='A'||z[2]=='B'||z[2]=='C'){
		zm1=1;
	}else{
		zm1=2;
	}
	if(zm==zm1){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(hup[2]=='F'&&z[2]=='D'||z[2]=='F'&&hup[2]=='D'){
		cout<<"1";
	}else{
		if(hup[2]=='A'&&z[2]=='B'||z[2]=='A'&&hup[2]=='B'){
			cout<<"1";
		}else{
			if(hup[2]=='C'&&z[2]=='B'||z[2]=='C'&&hup[2]=='B'){
				cout<<"1";
			}else{
				cout<<"0"; 
			}
		}
	}
	return 0;
} 
