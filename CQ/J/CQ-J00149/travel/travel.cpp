#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,sr,ce,se;
	cin>>cr>>sr>>ce>>se;
	if(cr==ce){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(sr[0]==se[0]&&sr[1]==se[1]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if((sr[2]=='D'&&se[2]=='F')||(sr[2]=='D'&&se[2]=='F')){
		cout<<"1";
	}
	else if((sr[2]=='A'||sr[2]=='B'||sr[2]=='C')&&(se[2]=='A'||se[2]=='B'||se[2]=='C')){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(sr[2]=='D'||sr[2]=='F'){
		cout<<"1";
	}
	else if((sr[2]=='A'&&se[2]=='B')||(sr[2]=='B'&&se[2]=='C')||(sr[2]=='C'&&se[2]=='B')||(sr[2]=='B'&&se[2]=='A')){
		cout<<"1";
	}
	else cout<<"0";
	return 0;
} 
