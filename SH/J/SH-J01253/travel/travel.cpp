#include<iostream>
using namespace std;

string ca, sa, cb, sb; 

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> ca >> sa >> cb >> sb;
	if(ca!=cb){
		cout << "0000";
		return 0;
	}
	int seata=10*(sa[0]-'0')+(sa[1]-'0');
	int seatb=10*(sb[0]-'0')+(sb[1]-'0');
	if(seata!=seatb){
		cout << "1000";
		return 0;
	}
	bool dira=((sa[2]-'A')>=3), dirb=((sb[2]-'A')>=3);
	if(dira!=dirb){
		cout << "1100";
		return 0;
	}
	
	int delta=sa[2]-sb[2];
	if(delta==1 || delta==-1)
		cout << "1111";
	else
		cout << "1110";
	
	return 0;
}

