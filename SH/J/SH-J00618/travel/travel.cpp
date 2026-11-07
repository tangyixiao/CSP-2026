#include<bits/stdc++.h>
using namespace std;

int a1, a2, b1, b2;
char a3, b3;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> a1;
	scanf("%d%c", &a2, &a3);
	cin >> b1;
	scanf("%d%c", &b2, &b3);
	
//	cout << a1 << ' ' << a2 << a3 << endl << b1 << ' ' << b2 << b3 << endl;
	
	if(a1 == b1){
		cout << "1";
		if(a2 == b2){
			cout << "1";
			if(a3 <= 'C' && b3 <= 'C' || a3 >= 'D' && b3 >= 'D'){
				cout << "1";
				if(a3 >= 'D' || a3 == 'B' || b3 == 'B')
					cout << "1";
				else
					cout << "0";
			}else
				cout << "00";
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}
