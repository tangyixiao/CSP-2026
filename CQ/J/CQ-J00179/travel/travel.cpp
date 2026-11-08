#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx){
		cout<<"0000";return 0;
	}
	cout<<"1";
	for(int i=0;i<max(sr.size(),sx.size());i++){
		if(sr[i]>='0'&&sr[i]<='9'&&sx[i]>='0'&&sx[i]<='9'){
			if(sr[i]!=sx[i]){
				cout<<"000";return 0;
			}
		}else{
			if(sr[i]>='A'&&sr[i]<='Z'&&sx[i]>='A'&&sx[i]<='Z') continue;
			else{
				cout<<"000";return 0;
			}
		}
	}
	cout<<"1";
	for(int i=0;i<sr.size();i++){
		if(sr[i]>='A'&&sr[i]<='Z'&&sx[i]>='A'&&sx[i]<='Z'){
			if(sr[i]<='C'&&sx[i]<='C') continue;
			if(sr[i]>='D'&&sx[i]>='D') continue;
			cout<<"00";return 0;
		}
	}
	cout<<"1";
	for(int i=0;i<sr.size();i++){
		if(sr[i]>='A'&&sr[i]<='Z'&&sx[i]>='A'&&sx[i]<='Z'){
			if(sr[i]<='C'&&sx[i]<='C'){
				if(sr[i]=='A'&&sx[i]=='B') cout<<"1";
				else if(sr[i]=='B'&&sx[i]=='C') cout<<"1";
				else if(sr[i]=='B'&&sx[i]=='A') cout<<"1";
				else if(sr[i]=='C'&&sx[i]=='B') cout<<"1";
				else cout<<"0";
			}else if(sr[i]>='D'&&sx[i]>='D'){
				if(sr[i]=='D'&&sx[i]=='F') cout<<"1";
				else if(sr[i]=='F'&&sx[i]=='D') cout<<"1";
				else cout<<"0";
			}
			else cout<<"0";
		}
	}
	return 0;
}
