#include<bits/stdc++.h>
using namespace std;
int c1, c2, ans=0;
string s1, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		ans += 1*1000;
		if((s1[0] == s2[0]) && (s1[1] == s2[1])){
			ans += 1*100;
			if((((s1[2] == 'A') || (s1[2] == 'B') || (s1[2] == 'C')) && ((s2[2] == 'D') || (s2[2] == 'F'))) || (((s2[2] == 'A') || (s2[2] == 'B') || (s2[2] == 'C')) && ((s1[2] == 'D') || (s1[2] == 'F')))){
				ans += 0;
			}else{
				ans += 1*10;
				if((s1[2] == 'A') && (s2[2] == 'B') || (s1[2] == 'B') && (s2[2] == 'A')){
					ans += 1;
				}
				if((s1[2] == 'B') && (s2[2] == 'C') || (s1[2] == 'C') && (s2[2] == 'B')){
					ans += 1;
				}
				if((s1[2] == 'D') && (s2[2] == 'F') || (s1[2] == 'F') && (s2[2] == 'D')){
					ans += 1;
				}
			}
		}
	}
	if(ans == 0){
		cout << "0000";
	}else{
		cout << ans;
	}
	return 0;
} 
