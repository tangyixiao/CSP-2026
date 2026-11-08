#include<bits/stdc++.h>
using namespace std;
int main(){
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1 << endl;
	}
	else{
		cout << 0 <<endl; 
	}
	char k,m;
	k = s2[0] + s2[1];
	m = s1[0] + s1[1];
	if(k == m && c1 == c2){
		cout << 1 << endl;
	}
	else{
		cout << 0 <<endl; 
	}
	char x, y;
	char k1, l1;
	char j,h,g;
	x = s1[2];
	y = s2[2];
	l1 = 'A';
	k1 = 'B';
	j = 'C';
	h = 'D';
	g = 'F';
	if(k == m && c1 == c2){

		if(x == y){
			cout << 1 << endl;
		}
		else if(x == l1 && y == k1){
			cout << 1 << endl;
		}
		else if(x == l1 && y == j){
			cout << 1 << endl;
		}
		else if(x ==g && y == h){
			cout << 1 << endl;
		}
		else if(x ==k1 && y == j){
			cout << 1 << endl;
		}
		else if(y == l1 && x == k1){
			cout << 1 << endl;
		}
		else if(y == l1 && x == j){
			cout << 1 << endl;
		}
		else if(y ==g && x == h){
			cout << 1 << endl;
		}
		else if(y ==k1 && x == j){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	else{
		cout << 0 << endl;
	}
	if(k == m && c1 == c2){
		if(x == j && y ==h){
			cout << 0;
		}
		else if(y == j && x == h){
			cout << 0;
		}
		else if(x - y == 1 || x-y == -1){
			cout << 1;
		}
		else{
			cout << 0;
		}
	}
	else{
		cout << 0;
	}
	return 0;
}
