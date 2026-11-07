#include <bits/stdc++.h>
using namespace std;
string carn1,seatn1,carn2,seatn2;
int flag=1;
bool ifCar(string a1,string b1){
	if(a1==b1) return 1;
	return 0;
}
     
bool ifCarSeat(string a2,string b2){
	if(ifCar(carn1,carn2)){
		int cnum1=(a2[0]-'0')*10+(a2[1]-'0');
		int cnum2=(b2[0]-'0')*10+(b2[1]-'0');
		if(cnum1==cnum2) return 1;
	}
	return 0;
}

bool ifUnpass(string a3,string b3){
	if(ifCarSeat(a3,b3)){
		char csin1=a3[2];
		char csin2=b3[2];
		if( (csin1=='A' || csin1=='B' || csin1=='C') && (csin2=='A' || csin2=='B' || csin2=='C' ) ){
			flag=1;
			return 1;
		}
		else if( (csin1=='D' || csin1=='F') && (csin2=='D' || csin2=='F' ) ){
			flag=2;
			return 1;
		}
	}
	return 0;
}

bool ifNext(string a4,string b4){
	if(ifUnpass(a4,b4)){
	//	cout << endl << flag << "?" << endl;
		int cnu1=a4[2]-'0';
		int cnu2=b4[2]-'0';
	//	cout << endl << cnu1-cnu2 << "?" << endl;
		if(flag==1){
			if(abs(cnu1-cnu2)==1) return 1;
		}
		else if(flag==2){
			if(abs(cnu1-cnu2==2)) return 1;
		}
	}
	return 0;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin >>carn1 >> seatn1 >> carn2 >> seatn2 ;

	cout << ifCar(carn1,carn2);
	cout << ifCarSeat(seatn1,seatn2);
	cout << ifUnpass(seatn1,seatn2);
	cout << ifNext(seatn1,seatn2);
	return 0;
}
