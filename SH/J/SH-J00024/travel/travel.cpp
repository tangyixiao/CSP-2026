#include<bits/stdc++.h>
using namespace std;
string a , b , c , d;
int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> a >> b >> c >> d;
	if(a != c){
		cout << "0000" << endl;
		return 0;
	}
	cout << "1";
	if(b[0] != d[0] || b[1] != d[1]){
		cout << "000" << endl;
		return 0;
	}
	cout << "1";
	int x = b[2] - 'A';
	int y = d[2] - 'A';
	if(x >= 0 && x <= 2 && (y == 3 || y == 5)){
		cout << "00" << endl;
		return 0;
	}
	if((x == 3 || x == 5) && y >= 0 && y <= 2){
		cout << "00" << endl;
		return 0;
	}
	cout << "1";
	if(x + y == 8){
		cout << "1" << endl;
		return 0;
	}
	if(x == 0 && y == 2){
		cout << "0" << endl;
		return 0;
	}
	if(x == 2 && y == 0){
		cout << "0" << endl;
		return 0;
	}
	cout << "1" << endl;
	return 0;
} 
