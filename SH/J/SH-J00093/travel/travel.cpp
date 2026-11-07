#include<bits/stdc++.h>
using namespace std;
int f(char a){
	if(a == 'A' or a == 'B' or a == 'C'){
		return 1;
	} else {
		return 2;
	}
}
int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	string c , s , cc , ss;
	cin >> c >> s >> cc >> ss;
	if(c == cc){
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if(s[0] == ss[0] and s[1] == ss[1]){
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if(f(s[2]) == f(ss[2])){
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if(f(s[2]) == 1){
		if((s[2] == 'A' and ss[2] == 'C') or (s[2] == 'C' and ss[2] == 'A')){
			cout << 0;
		} else {
			cout << 1;
		}
	} else {
		cout << 1;
	}
	return 0;
} 
