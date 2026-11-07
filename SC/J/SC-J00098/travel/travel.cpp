#include<bits/stdc++.h>
using namespace std;
int c1,c2;
bool ans;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000";
		return 0;
	}else cout << "1";
	if(s1.substr(0,2) == s2.substr(0,2)){
		cout << "1";
		if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')){
			cout << "1";
		}else cout << "0";
	}else cout << "00";
	if(s1.substr(0,2) == s2.substr(0,2)){
		if(abs(s1[2] - s2[2]) == 1){
			if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')){
				ans = 1;
			}
		}
	}else if(s1[2] == s2[2]){
		if(abs(stoi(s1.substr(0,2)) - stoi(s2.substr(0,2))) == 1){
			ans = 1;
		}	
	}if(ans) cout << 1;
	else cout << 0;
	return 0;
}