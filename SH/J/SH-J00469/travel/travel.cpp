#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rh,rw,xh,xw;
	cin>>rh>>rw>>xh>>xw;
	if(xh==rh){
		cout<<"1";
	}else{
		cout<<"0";
	}if(xh==rh&&rw[0]==xw[0]&&rw[1]==xw[1]){
		cout<<"1";
	}else  cout<<"0";
	if(xh==rh&&rw[0]==xw[0]&&rw[1]==xw[1]){
		if((xw[2]=='A'||xw[2]=='B'||xw[2]=='C')&&(rw[2]=='A'||rw[2]=='B'||rw[2]=='C')){
			cout<<"1";
		}else if((xw[2]=='D'||xw[2]=='F')&&(rw[2]=='D'||rw[2]=='F')){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}if(xh==rh&&rw[0]==xw[0]&&rw[1]==xw[1]){
		if((xw[2]=='A'||xw[2]=='B')&&(rw[2]=='A'||rw[2]=='B')){
			cout<<"1";
		}else if((xw[2]=='B'||xw[2]=='C')&&(rw[2]=='B'||rw[2]=='C')){
			cout<<"1";
		}else if((xw[2]=='D'||xw[2]=='F')&&(rw[2]=='D'||rw[2]=='F')){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}return 0;
} 
