#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,cx,sr,sx;
	cin>>cr>>sr>>cx>>sx;
	if(cr==cx){
		cout<<"1";
		if(sr.substr(0,2)==sx.substr(0,2)){
			cout<<1;
			if(sr[2]<='C'&&sx[2]<='C'){
				cout<<"1";
				if(sr[2]==sx[2]+1||sr[2]==sx[2]-1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(sr[2]>='D'&&sx[2]>='D'){
				cout<<"11";
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
