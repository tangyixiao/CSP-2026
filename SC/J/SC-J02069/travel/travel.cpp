#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int r,x;
	char r1,r2,r3,x1,x2,x3;
	cin>>r>>r1>>r2>>r3>>x>>x1>>x2>>x3;
	if(r==x){
		cout<<1;
		int rl=(r1-'0')*10+(r2-'0');
		int xl=(x1-'0')*10+(x2-'0');
		if(rl==xl){
			cout<<"1";
			if(r3>='A'&&r3<='C'&&x3>='A'&&x3<='C'){
				cout<<"1";
				if(abs(r3-x3)==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else if(r3=='D'&&x3=='F'||r3=='F'&&x3=='D'){
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