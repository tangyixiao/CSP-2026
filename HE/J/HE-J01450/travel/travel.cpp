#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rx,xx,rz,xz;
	cin>>rx>>rz>>xx>>xz;
		if(rx[1]==xx[1]){
		cout<<1;
		}else{
			cout<<0<<0<<0<<0;
			return 0;
		}
	for(int i=0;i<rx.size()-1;i++){
		if(rz[i]==xz[i]&&rz[i+1]==xz[i+1]){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	if(rz[2]=='A'||rz[2]=='B'||rz[2]=='C'){
		if(xz[2]=='A'||xz[2]=='B'||xz[2]=='C'){
			cout<<1;
		}
	}else if(rz[2]=='D'||rz[2]=='F'){
		if(xz[2]=='D'||xz[2]=='F'){
			cout<<1;
		}
	}else{
		cout<<0;
	}
	if(rz[3]+1==xz[3]||rz[3]-1==xz[3]){
		if(rz[3]+1=='D'||rz[3]-1=='C'){
			cout<<0;
		}else{
			cout<<1;
		}
	}else{
		cout<<0;
	} 
	return 0;
}
