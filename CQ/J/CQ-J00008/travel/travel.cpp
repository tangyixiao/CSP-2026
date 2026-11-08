#include<bits/stdc++.h>
using namespace std;
int ra,rb,xa,xb;
char rc,xc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ra>>rb>>rc>>xa>>xb>>xc;
	if(ra==xa){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(rb==xb&&ra==xa){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(rb==xb&&ra==xa){
		if(rc=='A'||rc=='B'||rc=='C'){
			if(xc=='A'||xc=='B'||xc=='C'){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			if(xc=='F'||xc=='D'){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}else{
		cout<<"0";
	}
	if(rb==xb&&ra==xa){
		if(rc=='A'&&xc=='B'){
			cout<<"1";
		}else if(rc=='B'&&xc=='A'){
			cout<<"1";
		}else if(rc=='B'&&xc=='C'){
			cout<<"1";
		}else if(rc=='C'&&xc=='B'){
			cout<<"1";
		}else if(rc=='D'&&xc=='F'){
			cout<<"1";
		}else if(rc=='F'&&xc=='D'){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}
