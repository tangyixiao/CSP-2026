#include<bits/stdc++.h>
using namespace std;
string q,w,e,r;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>q>>w>>e>>r;
	if(q==e){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(w[0]==r[0]&&w[1]==r[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(w[2]=='A'){
		if(r[2]=='B'){
			cout<<"11";
		}else{
			if(r[2]=='C'){
				cout<<"10";
			}else{
				cout<<"00";
			}
		}
	}
	if(w[2]=='B'){
		if(r[2]=='A'||r[2]=='C'){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}
	if(w[2]=='C'){
		if(r[2]=='B'){
			cout<<"11";
		}else{
			if(r[2]=='A'){
				cout<<"10";
			}else{
				cout<<"00";
			}
		}
	}
	if(w[2]=='D'){
		if(r[2]=='F'){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}if(w[2]=='F'){
		if(r[2]=='D'){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}
	return 0;
}
