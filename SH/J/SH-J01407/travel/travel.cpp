#include <bits/stdc++.h>
using namespace std;

bool sameside(char a, char b){
	if('A' <= a && a <= 'C' && 'A' <= b && b <= 'C') return true;
	if('D' <= a && a <= 'F' && 'D' <= b && b <= 'F') return true;
	return false;
}

bool neighbour(char a, char b){
	if(!sameside(a, b)) return false;
	if(b < a) swap(a, b);
	if(a == 'A' && b == 'B') return true;
	if(a == 'B' && b == 'C') return true;
	if(a == 'D' && b == 'F') return true;
	return false;
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	// Q1.
	if(c1 == c2) cout << "1";
	else cout << "0";
	
	// Q2.
	if(c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2)) cout << "1";
	else cout << "0";
	
	// Q3.
	if(c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && sameside(s1[2], s2[2])) cout << "1";
	else cout << "0";
	
	// Q4.
	if(c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && neighbour(s1[2], s2[2])) cout << "1";
	else cout << "0";


	return 0;
}

