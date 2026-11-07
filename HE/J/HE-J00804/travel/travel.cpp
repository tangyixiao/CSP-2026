#include<bits/stdc++.h>
using namespace std;
string rtrain,rseat,xtrain,xseat;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rtrain>>rseat>>xtrain>>xseat;
	int rxx,xxx;
	char a,b;
	for(int i=0;i<2;i++){
		rxx*=10;xxx*=10;
		rxx=rseat[i]-'0';
		xxx=xseat[i]-'0';
	}
	a=rseat[2];b=xseat[2];
	if(rtrain==xtrain){
		cout<<"1";
		if(rxx==xxx){
			cout<<"1";
			if((a<='C'&&b<='C')||(a>'C'&&b>'C')){
				cout<<"1";
				if(a+1==b||b+1==a){
					cout<<"1";
				}else {
					cout<<"0";
				}
			} else {
				cout<<"00";
			}
		}else {
			cout<<"000";
		}
	} else {
		cout<<"0000";
	}
	return 0;
}
