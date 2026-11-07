#include<iostream>
#include<cmath> 
#include<cstring>
#include<string>
using namespace std;
int lor(char ch){
	if('A'<=ch&&ch<='C')
	return 12;
	return 34;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string Rc,Rx,Xc,Xx;
	cin>>Rc>>Rx>>Xc>>Xx;
	if(Rc!=Xc){
		cout<<"0000";
	} else if(Rx.substr(0,2)!=Xx.substr(0,2)){
		cout<<"1000";
	} else if(lor(Rx[2])!=lor(Xx[2])){
		cout<<"1100";
	} else if(abs((int)Rx[2]-(int)Xx[2])!=1){
		cout<<"1110";
	} else{
		cout<<"1111";
	}
	return 0;
} 
