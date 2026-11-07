#include<bits/stdc++.h>
using namespace std;
string s;
int main( ){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline (cin,s);
	istringstream ui(s);
	vector<string>vc;
	string h;
	while(ui>>h){
		vc.emplace_back(h);
	}
	string w1=vc[1],w2=vc[3];
	if(vc[0]==vc[2]){
		cout<<1;
	}else {
		cout<<"0000";
		return 0;
	}
	if(w1.substr(0,2)==w2.substr(0,2)){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}

	int flag1=0,flag2=0;
	char t1=w1[w1.size()-1],t2=w2[w2.size()-1];
	if(t1=='A'||t1=='B'||t1=='C'){
		flag1=0;
	}else {
		flag1=1;
	}
	if(t2=='A'||t2=='B'||t2=='C'){
		flag2=0;
	}else {
		flag2=1;
	}
	
	if(flag1==flag2){
		cout<<1;
	}else {
		cout<<"00";
		return 0;
	}	
	if(flag1==0&&flag2==0){
		if(abs(int(t1-t2))==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if(flag1==1&&flag2==1){
		if(abs(int(t1-t2))==1){
			cout<<1;
		}else {
			cout<<0;
		}
	}
	return 0;
}