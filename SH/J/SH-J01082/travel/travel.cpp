#include <bits/stdc++.h>
using namespace std;
int a,b;
long long numa,numb;
string as,bs;
bool fl1=false,fl2=false,lars1=false,lars2=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>as;
	cin>>b>>bs;
	if(a==b){
		cout<<"1";
		fl1=true;
	}
	else cout<<"0";
	numa=as[0]*10+as[1];
	numb=bs[0]*10+bs[1];
	if(numa==numb&&fl1){
		cout<<"1";
		fl2=true;
	}
	else cout<<"0";
	if((as[2]>=65&&as[2]<=67)&&(bs[2]>=65&&bs[2]<=67)){
		lars1=true;
		if(fl1&&fl2){
			cout<<"1";	
		}else cout<<"0";
	}
	else if((as[2]==68||as[2]==69)&&(bs[2]==68||bs[2]==69)){
		lars2=true;
		if(fl1&&fl2){
			cout<<"1";
		}else cout<<"0";
	}else cout<<"0";
	if(lars2&&fl2){
		cout<<"1";
		return 0;
	}
	else if(lars1&&fl2){
		if(abs(as[2]-bs[2])==1){
			cout<<"1";
			return 0;
		}
		else cout<<"0";
	}
	else cout<<"0";
	return 0;
}
