#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,a4;
char b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>a3>>a4>>b2;
	if(a1==a3){
		cout<<1;
		if(a2==a4){
			cout<<1;
			if(b1=='A'||b1=='B'||b1=='C'){
				if(b2=='A'||b2=='B'||b2=='C'){
					cout<<1;
					if(abs(b1-b2)==1){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<"00";
				}
			}
			if(b1=='D'||b1=='F'){
				if(b2=='D'||b2=='F'){
					cout<<11;
				}
				else{
					cout<<"00";
				}
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	} 
	return 0;
} 