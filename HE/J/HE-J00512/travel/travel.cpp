#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string q;
	string w;
	string e;
	string r;
	cin>>q>>w>>e>>r;
	if(q==e){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(w[0]==r[0]&&w[1]==r[1]){
		cout<<1;
		if(w[2]=='A'&&r[2]=='B'){
			cout<<1;
		}
		else if(w[2]=='A'&&r[2]=='C'){
			cout<<1;
		}
		else if(w[2]=='B'&&r[2]=='C'){
			cout<<1;
		}
		else if(w[2]=='B'&&r[2]=='A'){
			cout<<1;
		}
		else if(w[2]=='C'&&r[2]=='B'){
			cout<<1;
		}
		else if(w[2]=='C'&&r[2]=='A'){
			cout<<1;
		}
		else if(w[2]=='D'&&r[2]=='F'){
			cout<<1;
		}
		else if(w[2]=='F'&&r[2]=='D'){
			cout<<1;
		}
	}
	else{
		cout<<0;
		cout<<0; 
	}
	if(abs(w[2]-r[2])==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	
	
	
	return 0;
}
