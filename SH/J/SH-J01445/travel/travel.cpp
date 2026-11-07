#include<bits/stdc++.h> 
using namespace std;
int main(){
	int carr,carx;
	string seatr,seatx;
	cin>>carr>>seatr>>carx>>seatx;
	if (carr==carx){
		cout<<"1";
	}
	else {
		cout<<"0000";
		return 0;
	}
	if (seatr[0]==seatx[0]&&seatr[1]==seatx[1]){
		cout<<"1";
	}
	else {
		cout<<"000";
		return 0;
	}
	char r=seatr[2],x=seatx[2];
	if ((seatr[2]=='D'&&seatx[2]=='F')||(seatr[2]=='F'&&seatx[2]=='D')||(r<'D'&&x<'D')){
		cout<<"1";
	}
	else {
		cout<<"00";
		return 0;
	}
	if ((seatr[2]=='D'&&seatx[2]=='F')||(seatr[2]=='F'&&seatx[2]=='D')||(seatr[2]+1==seatx[2])||(seatr[2]-1==seatx[2])){
		cout<<"1";
	}
	else {
		cout<<"0";
	}
	return 0;
}
//³É¹¦ 
