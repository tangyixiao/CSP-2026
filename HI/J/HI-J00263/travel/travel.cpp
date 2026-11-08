#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string cr1,sr2;
	cin >> cr1 >> sr2;
	string cx1,sx2;
	cin >> cx1 >> sx2;
	
	if(cr1 == cx1){
		cout << 1;
	}else{
		cout << 0;
	}
	
	if(cr1 == cx1 && abs(sr2) == abs(sx2){
		cout << 1;
	}else{
		cout << 0;
	}
	
	if(cr1 == cx1 && abs(sr2) == abs(sx2) && sr2 == sx2){
		cout << 1;
	}else{
		cout << 0;
	}
	
	if(sr2 == sx2){
		cout << 1;
	}else{
		cout << 0;
	}
	
	return 0;
}
