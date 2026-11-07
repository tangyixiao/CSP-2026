#include <iostream>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int n, m;
	string nn, mm;
	cin >> n >> nn >> m >> mm;
	if (n == m){
		cout << 1 ;
	}else{
		cout << 0 << 0 << 0 << 0 ;
		return 0; 
	}
	if (nn[0] == mm[0] && nn[1] == mm[1]){
		cout << 1 ;
	}else{
		cout << 0 ; 
	}
	if ((nn[0] == mm[0] && nn[1] == mm[1]) && (((nn[2] == 'A' || nn[2] == 'B' || nn[2] == 'C') && (mm[2] == 'A' || mm[2] == 'B' || mm[2] == 'C')) || ((nn[2] == 'D' || nn[2] == 'F') && (mm[2] == 'D' || mm[2] == 'F')))){
		cout << 1 ;
	}else{
		cout << 0 ; 
	}
	if ((nn[0] == mm[0] && nn[1] == mm[1]) && (((nn[2] == 'A' || nn[2] == 'B' || nn[2] == 'C') && (mm[2] == 'A' || mm[2] == 'B' || mm[2] == 'C') && ((mm[2] != 'A' && nn[2] != 'C') && (nn[2] != 'A') && (mm[2] != 'C'))) || ((nn[2] == 'D' || nn[2] == 'F') && (mm[2] == 'D' || mm[2] == 'F')))){
		cout << 1 ;
	}else{
		cout << 0 ; 
	}
	return 0;
}
