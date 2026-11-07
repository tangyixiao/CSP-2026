#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int c3 = (s1[0] - 48) + s1[1] - 48;
	int c4 = (s2[0] - 48) + s2[1] - 48;
	if(c1 == c2) {
		cout << 1;
		if(c3 == c4){
			cout << 1;
			if(s1[2] >= 'A' && s1[2] <= 'C' && 
			   s2[2] >= 'A' && s2[2] <= 'C'){
			   	cout << 1;
			   	if(abs(s1[2] - s2[2]) == 1){
			   		cout << 1;
				}
				else cout << 0;
			}
			else if((s1[2] == 'D' && s2[2] == 'F') || 
			    (s1[2] == 'F' && s2[2] == 'D')){
			    	cout << 11;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	
	return 0;
} 