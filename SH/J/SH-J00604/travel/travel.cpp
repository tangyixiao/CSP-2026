#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string roomr,seatr,roomx,seatx;
	cin>>roomr;
	cin>>seatr;
	cin>>roomx;
	cin>>seatx;
//	cout<<roomr<<' '<<seatr<<' '<<roomx<<' '<<seatx<<endl;
	if(roomr[0]==roomx[0] && roomr[1]==roomx[1]){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(seatr[0]==seatx[0] && seatr[1]==seatx[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	int nmr=0,nmx=0;
	nmr=seatr[2]-64;
	nmx=seatx[2]-64;
	if(nmr<=3){
		if(nmx<=3){
			cout<<1;
		}
		else{
			cout<<"00";
			return 0;
		}
		if(abs(nmr-nmx)==1){
			cout<<1;
			return 0;
		}
		else{
			cout<<0;
			return 0;
		}
	}
	if(nmr>=4){
		if(nmx>=4){
			cout<<"11";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	return 0;
} 
