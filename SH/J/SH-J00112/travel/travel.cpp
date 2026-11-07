#include <bits/stdc++.h>
using namespace std;
bool flag1 = 0,flag2 = 0,flag3 = 0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
		flag1 = 1;
	}
	else{
		cout << 0;
	}
	
	if(flag1 && s1[0] == s2[0] && s1[1] == s2[1]){
		cout << 1;
		flag2 = 1;
	}
	else{
		cout << 0;
	}
	
	char cc1 = s1[2],cc2 = s2[2];
	if(flag2 && cc1 >= 'A' && cc1 <= 'C' && cc2 >= 'A' && cc2 <= 'C'){
		cout << 1;
		flag3 = 1;
	}
	else if(flag2 && cc1 >= 'D' && cc1 <= 'E' && cc2 >= 'D' && cc2 <= 'E'){
		cout << 1;
		flag3 = 1;
	}
	else{
		cout << 0;
	}
	
	if(flag3 && abs(cc1-cc2) <= 1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}
