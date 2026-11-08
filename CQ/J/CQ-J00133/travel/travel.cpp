#include <iostream>
using namespace std;
int main (){
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	
	int C1,C2,C3,C4;
	cin >> C1 >> C2 >> C3 >> C4;
	if (C1==C3){
		cout << "1";
    }else {
    	cout << "0";
	}
	if (C2==C4){
		cout << "1";
	}else{
		cout << "0"; 
	}
	if (C2==C4&&C1==C3){
		cout << "1";
	}else{
		cout << "0";
	}
	if (C2-C4==1){
		cout << "1";
	}else {
		cout << "0";
	}
    return 0;
}
