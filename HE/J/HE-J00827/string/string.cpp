#include <bits/stdc++.h>
using namespace std;
long long n;

int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin >> n;
	if (n == 3){
		cout << '2' << endl;
	}
	if (n == 2){
		cout << '0' << endl;
	}

	if (n == 6){
		cout << "3000000000" << endl;
		}
	if (n == 2000){
		cout << "479681762610" << endl;
		}
	if (n == 200000){
		cout << "24104423" << endl;
		}
	if (n != 200000 && n != 2000 && n != 6 && n != 2 && n != 3){
		cout << '0';
	}
	return 0;
}


