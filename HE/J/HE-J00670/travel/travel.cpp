#include<bits/stdc++.h>
using namespace std;
double r,x,rr,xx,rrr,xxx;
char R,X;
int main(){
	//freopen("",t,stdin);
	//freopen("",w,stdout);
	ios::sync_with_stdio(false);
	cin.tie();
	cin>>r>>rr>>R;
	cin>>x>>xx>>X;
	if(r==x) {
		cout<<1;
		xxx=1;
	}
	else {
		cout<<0;
		xxx=0;
	}
	if(xxx==0){
		cout<<"000";
		return 0;
	}	
	if(xxx==1){
		if(rr==xx) {
		cout<<1;
		rrr=1;
	}
	else {
		cout<<0;
		rrr=0;
	}
		if(rrr==0){
		cout<<"00";
		return 0; 
		}	
		if(rrr=1){
			if((R=='A'||R=='B'||R=='C')&&(X=='A'||X=='B'||X=='C'))
			 cout<<1;
			else {
			if((R=='D'||R=='f')&&(X=='D'||X=='f'))
			cout<<1;
			else {
	   		 cout<<0;
				}		
			}	
			if((R=='A'||X=='C')&&X=='B'){
				cout<<1;
				return 0;
			}
			else {
				cout<<0;
				return 0;
				}	
				if(R=='B'&&(X=='A'||X=='C')){
					cout<<1;
					return 0;
				} 
				else {
					cout<<0;
						return 0;
				}
				if((R=='D'||R=='f')&&(X=='D'||X=='f')){
						cout<<1;
						return 0;
					}
					else {
						cout<<0;
						return 0;
				}			
		}
	}
	
	return 0;
}
