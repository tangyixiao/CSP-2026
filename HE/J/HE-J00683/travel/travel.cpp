#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout); 
	int c1 , s1 , l1 , c2 , s2 , l2;
	char ch1 , ch2 , ch3;
	cin >> c1;
	cin >> ch1 >> ch2 >> ch3;
	s1 = (ch1 - '0') * 10 + (ch2 - '0');
	l1 = (ch3 - 'A'); 
	cin >> c2;
	cin >> ch1 >> ch2 >> ch3;
	s2 = (ch1 - '0') * 10 + (ch2 - '0');
	l2 = (ch3 - 'A'); 
	if(c1 == c2) cout << 1;
	else{cout << "0000"; return 0;}
	if(s1 == s2) cout << 1;
	else{cout << "000"; return 0;}
	if((l1 >= 0 && l1 <= 2 && l2 >= 0 && l2 <= 2) || (l1 >= 3 && l1 <= 4 && l2 >= 3 && l2 <= 4)) cout << 1;
	else{cout << "00"; return 0;}	
	if(((l1 + 1) == l2) || ((l1 - 1) == l2)) cout << 1;
	else{cout << "0"; return 0;}
	return 0;
}
 
