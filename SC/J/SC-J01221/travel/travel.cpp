#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1[3],s1[4],c2[3],s2[4];
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[1] == c2[1] && c1[2] == c2[2]){
		cout << 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout << 1;
			if(s1[2] <= 'C' && s2[2] <= 'C' || s1[2] > 'C' && s2[2] > 'C'){
				cout << 1;
				if(s1[2] > 'C' && s2[2] > 'C'){
					cout << 1;
				}
				else if(s1[2] == 'A' && s2[2] == 'B' || s1[2] == 'B' && s2[2] == 'A' || s1[2] == 'C' && s2[2] == 'B' || s1[2] == 'B' && s2[2] == 'C'){
					cout << 1;
				}
				else{
					cout << 0;
				}
			}
			else{
				cout << 0 << 0;
			}
		}
		else{
			cout << 0 << 0 << 0;
		}
	}
	else{
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
} 