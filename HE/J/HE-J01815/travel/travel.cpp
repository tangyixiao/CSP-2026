#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ca1,ca2,cb1,cb2;
	char ss1,ss2;
	cin>>ca1>>cb1>>ss1;
	cin>>ca2>>cb2>>ss2;
	int s1=ss1,s2=ss2;
	//A
	if(ca1==ca2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	//B
	if(cb1==cb2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	//C D
	if(s1<=67&&s2<=67){
		cout<<"1";
		if(abs(s1-s2)==1){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else if(s1>=68&&s2>=68){
		cout<<"1";
		if(abs(s1-s2)==2){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"00";
	}
	return 0;
}
