#include <iostream>
using namespace std;
bool kside(int x, int y){
	int a = x, b = y;
	if(a == 'A' or a == 'B' or a == 'C'){
		if(b == 'A' or b == 'B' or b == 'C'){
			return true;
		} else{
			return false;
		}
	} else{
		if(b == 'D' or b == 'F'){
			return true;
		} else{
			return false;
		}
	}
}
bool conne(char a, char b){
	if(a == 'F' and b == 'D' or a == 'D' and b == 'F'){
		return true;
	} else{
		if(a == 'C' and b == 'B' or a == 'B' and b == 'C'){
			return true;
		} if(a == 'A' and b == 'B' or a == 'B' and b == 'A'){
			return true;
		}
		return false;
	}
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b;
	char achar, bchar;
	int anum, bnum;
	cin >> a >> anum >> achar >> b >> bnum >> bchar;


	if(a == b){
		cout << 1;
		if(anum == bnum){
			cout << 1; 
			if(kside(achar, bchar)){
				cout << 1;
				if(conne(achar, bchar)){
					cout << 1;
				} else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		} else{
			cout << "000";
		}
	} else{
		cout << "0000";
	}
	return 0;
} 
