#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	char a1 = s1[2];
	char a2 = s2[2];
	int b1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int b2 = (s2[0] - '0') * 10 + (s2[1] - '0'); 
	if(c1 == c2){
		cout << 1;
		if(b1 == b2){
			cout << 1;
			if(((a1 == 'A' || a1 == 'B'|| a1 == 'C') && (a2 == 'A' || a2 == 'B'|| a2 == 'C')) 
			|| ((a1 == 'D' || a1 == 'F') && (a2 == 'F' || a2 == 'D'))){
				cout << 1;
				if(a1 == 'A' && a2 == 'B' || a1 == 'B' && a2 == 'A'||
					a1 == 'B' && a2 == 'C' || a1 == 'C' && a2 == 'B'
					|| a1 == 'D' && a2 == 'F'|| a1 == 'F' && a2 == 'D'){
						cout << 1;
				} else cout << 0;
			} else cout << 0 << 0;
		} else cout << 0 << 0 << 0;
	} else cout << 0 << 0 << 0 << 0;
	return 0;
}
