#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cc1,cc2,ss1,ss2;
	cin>>cc1>>ss1>>cc2>>ss2;
	if(cc1==cc2){
		cout<<'1';
	}else {
		cout<<'0';
		cout<<'0';
		cout<<'0';
		cout<<'0';
		return 0;
	}
	
	if(ss1[0]==ss2[0]&&ss1[1]==ss2[1]){
		cout<<'1';
	}else {
		cout<<'0';
		cout<<'0';
		cout<<'0';
		return 0;
	}
	
	if((ss1[2]=='F'&&ss2[2]=='D')||(ss1[2]=='D'&&ss2[2]=='F')){
		cout<<'1';
	}else if((ss1[2]=='A'&&(ss2[2]=='B'||ss2[2]=='C'))||(ss1[2]=='B'&&(ss2[2]=='A'||ss2[2]=='C'))||(ss1[2]=='C'&&(ss2[2]=='B'||ss2[2]=='A'))){
		cout<<'1';
	}else{
		cout<<'0';
		cout<<'0';
		return 0;
	}
	
	if((ss1[2]=='F'&&ss2[2]=='D')||(ss1[2]=='D'&&ss2[2]=='F')){
		cout<<'1';
	}else if((ss1[2]=='A'&&ss2[2]=='B')||(ss1[2]=='B'&&(ss2[2]=='A'||ss2[2]=='C'))||(ss1[2]=='C'&&ss2[2]=='B')){
		cout<<'1';
	}else{
		cout<<'0';
	}
	
	return 0;
}
