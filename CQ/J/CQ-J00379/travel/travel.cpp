#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string c1, s1, c2, s2;
string s11, s22;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2){
		cout << "0000";
		return 0;
	}
	for(int i=0;i<(int)s1.size()-1;i++) s11+=s1[i];
	for(int i=0;i<(int)s2.size()-1;i++) s22+=s2[i];
	if(s11!=s22){
		cout << "1000";
		return 0;
	}
	if(s1[2] == 'A' && (s2[2] == 'D' || s2[2] == 'F') || s1[2] == 'B' && (s2[2] == 'D' || s2[2] == 'F') || s1[2] == 'C' && (s2[2] == 'D' || s2[2] == 'F') || s1[2] == 'D' && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') || s1[2] == 'F' && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')){
		cout << "1100";
		return 0;
	}
	if(abs(s1[2]-s2[2])!=1){
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
} 
