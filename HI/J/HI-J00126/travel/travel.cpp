#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string q,w,e,r;
	cin>>q>>w>>e>>r;
	if(q==e){
		cout<<1;
			if(w[0]==r[0]&&w[1]==r[1]){
				cout<<1;
				if(w[2]=='C'||w[2]=='B'||w[2]=='A'){
					if(r[2]=='C'||r[2]=='B'||r[2]=='A'){
					cout<<1;
					if(w[2]=='C'&&r[2]=='B'||w[2]=='B'&&r[2]=='C'||w[2]=='B'&&r[2]=='A'||w[2]=='A'&&r[2]=='B'){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<0<<0;
				}
				}
				else if(w[2]=='D'||w[2]=='F'){
					if(r[2]=='D'||r[2]=='F'){
					cout<<1<<1; 
				}
				else{
					cout<<0<<0;
				}
				}
			}
			else {
			cout<<0<<0<<0;
			}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}
