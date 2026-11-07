#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,a1,b1;
	bool k=1;
	cin>>a>>a1>>b>>b1;
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0";
		k=0;
	}
	if(a1[0]==b1[0] && a1[1]==b1[1] && k==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if((a1[2]=='A' || a1[2]=='B' || a1[2]=='C') && (b1[2]=='A' || b1[2]=='B' || b1[2]=='C') && k==1 ){
		cout<<"1";
	}else if((a1[2]=='E' || a1[2]=='F') && (b1[2]=='E' || b1[2]=='F') && k==1 ){
		cout<<"11";
		return 0;
	}else{
		cout<<"00";
		return 0;
	}if((a1[2]=='A' && b1[2]=='C') || (a1[2]=='C' && b1[2]=='A')){
		cout<<"0";
	}else{
		cout<<"1";
	}
	return 0;
}
