#include <bits/stdc++.h>
using namespace std;

int check_train1(char str1, char str2){
	if((str1 <= 'C' && str2 <= 'C') || (str1 >= 'D' && str2 >= 'D')){
		return 1;
	}
	return 0;
}

int check_train2(char str1, char str2){
	if(abs(str1 - str2) == 1 && !(str1 == 'C' && str2 == 'D')) return 1;
	return 0;
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 != c2){
		cout << "0000" << "\n";
	    return 0;
	}else{
		cout << "1";
	}
	
	if(s1.substr(0, 2) == s2.substr(0, 2)){
		cout << "1";
	}else{
		cout << "000" << "\n";
		return 0;
	}
	
	if(check_train1(s1[2], s2[2]) == 0){
		cout << "00" << "\n";
		return 0;
	}
	cout << check_train1(s1[2], s2[2]);
	cout << check_train2(s1[2], s2[2]);
}
