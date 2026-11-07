#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 0x3f3f3f3f;

string c1, s1, c2, s2;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int ansc = 0;
	for(int i = 0 ; i < 2 ; ++ i){
		if(c1[i] == c2[i]) ansc ++;
	}
	if(ansc != 2){
		cout << "0000";
		return 0;
	}
	cout << "1";
	int anss = 0;
	for(int i = 0 ; i < 2 ; ++ i){
		if(s1[i] == s2[i]) anss ++;
	}
	if(anss != 2){
		cout << "000";
		return 0;
	}
	cout << "1";
	if(((s1[2] >= 'A' && s1[2] <= 'C') && (s2[2] >= 'A' && s2[2] <= 'C')) || ((s1[2] >= 'D' && s1[2] <= 'F') && (s2[2] >= 'D' && s2[2] <= 'F'))){
		cout << "1";
		if((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'C' && s2[2] == 'B')){
			cout << "1";
			return 0;
		}
		if((s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'B' && s2[2] == 'C')){
			cout << "1";
			return 0;
		}
		if((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')){
			cout << "1";
			return 0;
		}
		cout << "0";
		return 0;
	}
	cout << "00";
	return 0;
}