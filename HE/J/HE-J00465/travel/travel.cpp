#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1 != c3){
		cout << "0000";
	}
	else{
		if(c2[0] + c2[1] != c4[0] + c4[1]){
			cout << "1000";
		}
		else{
			char tmp1 = c2[2], tmp2 = c4[2];
			if((tmp1 <= 'C' && tmp2 <= 'C') || (tmp1 > 'C' && tmp2 > 'C')){
				if(char(max(tmp1, tmp2) - 1) == char(min(tmp1, tmp2))){
					cout << "1111";
					return 0;
				}
				else{
					cout << "1110";
				}
			}
			else{
				cout << "1100";
			}
		}
	}
	return 0;
}
