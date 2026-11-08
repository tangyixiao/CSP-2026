#include <iostream>
using namespace std;
int main(){
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
    int a;
	string b;
	int c;
	string d; 
	cin >> a >>b >> c >>d;
	if (a==c){
		cout << 1;
	}
	else{ 
	    cout << "0000";
		return 0;
	}
	if (b[1]==d[1]&&b[0]==d[0]){
		cout << 1;
	}
	else{
		cout << "000";
		return 0;
	}
	if (b[2]<68&&d[2]<68){
		cout << 1;
	}
	else{
		cout << "00";
		return 0;
	}
	if (b[2]-1==d[2]||b[2]+1==d[2]){
		cout << 1;
	}
	else{
		cout << 0;
    }
	return 0;
} 
