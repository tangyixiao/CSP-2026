#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string c1, c2, s1, s2;
int cc1, cc2, ss1, ss2, t1, t2; 

bool check1(){
	if (t1 == 0){
		if (t2 == 1 || t2 == 2) return 1;
		return 0; 
	}
	if (t1 == 1){
		if (t2 == 0 || t2 == 2) return 1;
		return 0; 
	}
	if (t1 == 2){
		if (t2 == 1 || t2 == 0) return 1;
		return 0; 		
	}
	if (t1 == 3){
		if (t2 == 5) return 1;
		return 0; 		
	}
	if (t1 == 5){
		if (t2 == 3) return 1;
		return 0; 		
	}
}

bool check2(){
	if (t1 == 0){
		if (t2 == 1) return 1;
		return 0; 
	}
	if (t1 == 1){
		if (t2 == 0 || t2 == 2) return 1;
		return 0; 
	}
	if (t1 == 2){
		if (t2 == 1) return 1;
		return 0; 		
	}
	if (t1 == 3){
		if (t2 == 5) return 1;
		return 0; 		
	}
	if (t1 == 5){
		if (t2 == 3) return 1;
		return 0; 		
	}
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);	
	
	cin >> c1 >> s1 >> c2 >> s2;
	cc1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	cc2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	ss1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	ss2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	t1 = s1[2] - 'A';
	t2 = s2[2] - 'A';// ABC DF, 012 35
	
	if (cc1 == cc2){
		cout << 1;
		if (ss1 == ss2){
			cout << 1;
			if (check1()){
				cout << 1;
				if (check2()){
					cout << 1;
				}
				else{
					cout << 0;
				}
			}
			else{
				cout << "00";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	cout << endl;
	
	return 0;
} 
