#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string car1,car2,seat1,seat2;
	cin>>car1>>seat1>>car2>>seat2;
	char row1=seat1[2],row2=seat2[2];
	if(car1==car2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(((seat1[0]+seat1[1])==(seat2[0]+seat2[1]))){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((row1<='C'&&row2<='C')||(row1>='D'&&row2>='D'))cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((row1=='C'&&row2=='B')||(row1=='B'&&row2=='C')||(row1=='A'&&row2=='B')||(row1=='B'&&row2=='A')||(row1=='D'&&row2=='F')||(row1=='F'&&row2=='D'))cout<<1;
	else cout<<0;
	return 0;
} 
