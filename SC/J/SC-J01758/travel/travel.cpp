#include<bits/stdc++.h>
using namespace std;
string car1,seat1,car2,seat2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>car1>>seat1>>car2>>seat2;
	if(car1==car2) cout<<1;
	else{cout<<"0000";return 0;}
	int p1=seat1[0]*10+seat1[1];
	int p2=seat2[0]*10+seat2[1];
	if(p1==p2) cout<<1;
	else{cout<<"000";return 0;}
	if(seat1[2]<='C'&&seat2[2]<='C') cout<<1;
	else if(seat1[2]>'C'&&seat2[2]>'C') cout<<1;
	else{cout<<"00";return 0;}
	if(seat1[2]=='A'&&seat2[2]=='B') cout<<1;
	else if(seat1[2]=='B'&&seat2[2]=='A'||seat1[2]=='B'&&seat2[2]=='C') cout<<1;
	else if(seat1[2]=='C'&&seat2[2]=='B') cout<<1;
	else if(seat1[2]=='D'&&seat2[2]=='F') cout<<1;
	else if(seat1[2]=='F'&&seat2[2]=='D') cout<<1;
	else cout<<0;
	return 0;
}