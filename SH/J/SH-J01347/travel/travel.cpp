#include<bits/stdc++.h>
using namespace std;

//I AK csp-j

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 ;
	cin >> c2 >> s2;
//	cout << c1 << " " << s1 << " "<< c2 << " " << s2;
	int pai1 = int(s1[0] - '0') * 10 + int(s1[1] - '0'),pai2 = int(s2[0] - '0') * 10 + int(s2[1] - '0');
	char lie1 = s1[2];
	char lie2 = s2[2];
	if(c1 == c2){
		cout << '1';
		if(pai1 == pai2){
			cout << '1';
			if((lie1 >= 'A' and lie1 <= 'C' and lie2 >= 'A' and lie2 <= 'C') or (lie1 >= 'D' and lie1 <='F' and lie2 >= 'D' and lie2 <= 'F')){
				cout << '1';
				if(lie1 != 'A' and lie1 != 'F'){
					if(lie2 == lie1+1 or lie2 == lie1-1){
						cout << '1';
						return 0;
					}else{
						cout << '0';
						return 0;
					}
				}
				if(lie1 == 'A' and lie1 + 1 == lie2){
					cout << '1';
					return 0; 
				}else{
					cout << '0';
					return 0;
				}
				if(lie1 == 'F' and lie1 - 1 == lie2){
					cout << '1';
					return 0; 
				}else{
					cout << '0';
					return 0;
				}
			}else{
				cout << "00";
				return 0;
			}
		}else{
			cout << "000";
			return 0;
		}
	}else{
		cout << "0000";
		return 0;
	}
	return 0;
} 
