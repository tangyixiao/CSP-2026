#include <bits/stdc++.h>
using namespace std;
int main(){
	string s2,s4;
	int s1,s3;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	if(s1 != s3){
		cout << "0000";
		return 0;
	}
	cout << '1';
	int a = 0,b = 0;
	a = (s2[0] - '0') *10 + s2[1] - '0';
	b = (s4[0] - '0') *10 + s4[1] - '0';
	if(a != b){
		cout << "000";
		return 0;
	}
	cout << 1;
	char c = s2[2];
	char d = s4[2];
	if(c - d == 1 || d - c == 1 || (c == 'D' && d == 'F') || (d == 'D' && c =='F')){
		cout << '1';
	}
	else{
		cout << "00";
		return 0;
	}
	bool r1 = 0,r2 = 0;
	if(c == 'A'|| c == 'B' || c == 'C'){
		r1 = 1;
	}
	if(d == 'A'|| d == 'B' || d == 'C'){
		r2 = 1;
	}
	if(r1 = r2){
		cout << '1';
	}
	else{
		cout << '0';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
