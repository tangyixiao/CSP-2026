#include<bits/stdc++.h>
using namespace std;
int a , b;
char s1[3] , s2[3];
bool check3(){
	if((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')){
		if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'){
			return 1;
		}
	}
	if(s1[2] == 'D' || s1[2] == 'F'){
		if(s2[2] == 'D' || s2[2] == 'F') return 1;
	}
	return 0; 
}
bool check4(){
	//ÏàÁÚ
	if(s1[2] == 'A' && s2[2] == 'B') return 1;
	if(s1[2] == 'B' && s2[2] == 'A') return 1;
	if(s1[2] == 'B' && s2[2] == 'C') return 1;
	if(s1[2] == 'C' && s2[2] == 'B') return 1;
	if(s1[2] == 'D' && s2[2] == 'F') return 1;
	if(s1[2] == 'F' && s2[2] == 'D') return 1;
	return 0;
}
int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> a >> s1 >> b >> s2;
//	cout << a << " " << s1 << " " << b << " " << s2;	
	if(a == b){
		cout << 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout << 1;
			if(check3()){
				cout << 1;
				if(check4()){
					cout << 1;
				}else cout << '0';
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
} 
