#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int num_a,num_b;
	string seat_a,seat_b;
	cin>>num_a>>num_b;
	cin>>seat_a>>seat_b;
	if(num_a!=num_b){
		cout<<"0000";
		return 0;	
	}
	if(seat_a[0]!=seat_b[0] || seat_a[1]!=seat_b[1]){
		cout<<"1000";
		return 0;
	}
	char x=seat_a[2];
	char y=seat_b[2];
	if(x=='A' && (y=='D' || y=='F')||
	   x=='B' && (y=='D' || y=='F')||
	   x=='C' && (y=='D' || y=='F')||
	   y=='A' && (x=='D' || x=='F')||
	   y=='B' && (x=='D' || x=='F')||
	   y=='C' && (x=='D' || x=='F')){
		cout<<"1100";
		return 0;
	}
	if(abs(x-y)==1) cout<<"1111";
	else cout<<"1110";
	return 0;
} 
