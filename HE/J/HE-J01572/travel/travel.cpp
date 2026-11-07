#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
bool abc(char c1, char c2){
	if(c1 >= 'A' && c1 <= 'C'){
		if(c2 >= 'A' && c2 <= 'C') return true;
		else return false;
	}
	else{
		if(c2 == 'F' || c2 == 'D') return true;
		else return false;
	}
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool b = 0;
	if(c1 != "01" && c1 != "16" && c2 != "01" && c2 != "16" && c1 == c2){
		cout << '1';
		b = 1;
	}
	else cout << '0';
	bool e = 0;
	if(b == 1 && s1[0] == s2[0] && s1[1] == s2[1]){
		cout << '1';
		e = 1;
	}
	else cout << '0';
	bool a = 0;
	if(e == 1 && abc(s1[2], s2[2])){
		cout << '1';
		a = 1;
	}
	else cout << '0';
	if(a == 1 && abs(s1[2] - s2[2]) == 1){
		cout << '1';
	}
	else cout << '0';
	puts("");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//Trick||Treat!
