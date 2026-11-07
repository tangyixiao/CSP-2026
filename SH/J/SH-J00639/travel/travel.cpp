#include<bits/stdc++.h>
using namespace std;
int ys(char c){
	if(c == 'A' || c == 'B' || c == 'C') return 0;
	else return 1;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout); 
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000";
	}else{
		if(s1[0] != s2[0] || s1[1] != s2[1]){
			cout << "1000";
		}else if(ys(s1[2]) != ys(s2[2])){
			cout << "1100";
		}else if(abs(s1[2] - s2[2]) > 1){
			cout << "1110";
		}else{
			cout << "1111";
		}
	}
}
/*
LUOGU UID 1549034.

ίχίχίχ. 
*/ 
