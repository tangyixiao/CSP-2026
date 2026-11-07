#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,x,a;
	char rl,xl;
	string rw,xw;
	cin>>r>>rw;
	cin>>x>>xw;
	rl=rw.at(2);
	xl=xw.at(2);
	if(r!=x){
		cout<<"0000";
		return 0;
	}
	else if(rw.at(1)!=xw.at(1)){
		cout<<"1000";
		return 0;
	}
	else if(rl=='D'&&xl!='F'){
		cout<<"1100";
		return 0;
	}
	else if(rl=='F'&&xl!='D'){
		cout<<"1100";
		return 0;
	}
	else if(rl-xl>2){
		cout<<"1100";
		return 0;
	}
	else if(rl=='C'&&xl=='D'){
		cout<<"1100";
		return 0;
	}
	else if(rl-xl>1){
		cout<<"1110";
		return 0;
	}
	else{
		cout<<"1111";
	}
	return 0;
}