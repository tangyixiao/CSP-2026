#include<bits/stdc++.h>
using namespace std;
string rx,xx,rw,xw;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rx>>rw>>xx>>xw;
	if(rx==xx){
		cout<<1;
		if(rw[0]==xw[0]&&rw[1]==xw[1]){
			cout<<1;
			if(rw[2]=='A'&&xw[2]=='B'||rw[2]=='A'&&xw[2]=='C'||rw[2]=='B'&&xw[2]=='C'||rw[2]=='D'&&xw[2]=='F'||xw[2]=='A'&&rw[2]=='B'||xw[2]=='A'&&rw[2]=='C'||xw[2]=='B'&&rw[2]=='C'||xw[2]=='D'&&rw[2]=='F'){
				cout<<1;
				if(rw[2]=='A'&&xw[2]=='B'||rw[2]=='B'&&xw[2]=='C'||rw[2]=='D'&&xw[2]=='F'||xw[2]=='A'&&rw[2]=='B'||xw[2]=='B'&&rw[2]=='C'||xw[2]=='D'&&rw[2]=='F'){
					cout<<1; 
				}else cout<<"0";
			}else cout<<"00"; 
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
