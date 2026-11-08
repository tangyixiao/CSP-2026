#include<iostream>
#include<iomanip> 
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	string s1 , t1 , s2 , t2;
	cin >> s1 >> t1 >> s2 >> t2;
	cout << (s1 == s2);
	cout << (s1 == s2 && t1[0] == t2[0] && t1[1] == t2[1]);
	cout << (s1 == s2 && t1[0] == t2[0] && t1[1] == t2[1] && ((t1[2] <= 'C' && t2[2] <= 'C') || (t1[2] >= 'D' && t2[2] >= 'D')));
	cout << (s1 == s2 && t1[0] == t2[0] && t1[1] == t2[1] && ((t1[2] == 'A' && t2[2] == 'B') || (t1[2] == 'B' && t2[2] == 'A') || (t1[2] == 'B' && t2[2] == 'C') || (t1[2] == 'C' && t2[2] == 'B') || (t1[2] == 'D' && t2[2] == 'F') || (t1[2] == 'F' && t2[2] == 'D')));
	return 0; 
} 
