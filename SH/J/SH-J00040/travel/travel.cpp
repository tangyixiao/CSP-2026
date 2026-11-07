#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>> c1 >> s1 >> c2 >> s2;
	string ans = "";
	if(c1 == c2){
		ans += '1';
	}
	else{
		cout<< "0000";
		return 0;
	}
	string num1 = s1.substr(0,2);
	string num2 = s2.substr(0,2);
	if(num1 == num2){
		ans += '1';
	}
	else{
		cout<< "1000";
		return 0;
	}
	if((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') || (s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')){
		ans += '1';
	}
	else{
		cout<< "1100";
		return 0;
	}
	int x = abs(int(s1[2]) - int(s2[2]));
	if(x == 1 && !(s1[2] == 'C' && s2[2] == 'D' || s1[2] == 'D' && s2[2] == 'C') || s1[2] == 'D' && s2[2] == 'F' || s1[2] == 'F' && s2[2] == 'D'){
		ans += '1';
	}
	else{
		cout<< "1110";
		return 0;
	}
	cout<< ans;
	return 0;
}
