#include<bits/stdc++.h> 
using namespace std;
string c1 , s1 , c2 , s2;
string a1 , b1;
int main(){
	
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << "1";
		a1 += s1[0];
		a1 += s1[1];
		b1 += s2[0];
		b1 += s2[1];
		if(a1 == b1){
			cout << "1";
			char a2 = s1[2];
			char b2 = s2[2];
			if(a2 >= 'A' && a2 <= 'C' && b2 >= 'A' && b2 <= 'C' || a2 >= 'D' && a2 <= 'F' && b2 >= 'D' && b2 <= 'F'){
				cout << "1";
				if(a2 + 1 == b2 || b2 + 1 == a2){
					cout << "1";
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	
	return 0;
}
