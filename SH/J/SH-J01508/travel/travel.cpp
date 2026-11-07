#include <bits\stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(char s1, char s2) {
	if ((s1 == 'D' && s2 == 'F') || (s2 == 'D' && s1 == 'F')) return 1;
	char a = char(s1+1);
	char b = char(s1-1);
	if (s2 != a && s2 != b) return 0;
	return 1;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char c1[3], c2[3], s1[4], s2[4];
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1[1] == c2[1] && c1[0] == c2[0]) {
		cout << "1";
		
		
		if (s1[0] != s2[0]) {
			cout << "000";
			
		}else if (s1[1] != s2[1]) {
			cout << "000";
			
		}else {
			cout << "1";
			
			char ch1 = s1[2], ch2 = s2[2];
			if ((ch1 <= 'C' && ch2 >= 'D') || (ch1 >= 'D' && ch2 <= 'C')) {
			    	cout << "00";
			    	
			}else {
				cout << "1";
				
				if (cmp(s1[2], s2[2])) {
					cout << "1";
				}else {
					cout << "0";
				}
				
			}
			
		}
		
		
	}else {
		cout << "0000";
		
		
	}
	
	return 0;
}
