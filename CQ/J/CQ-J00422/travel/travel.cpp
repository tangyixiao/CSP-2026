#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	int n = s1.size();
	for(int i = 0; i < n - 1; i ++ ){
		if(s1[i] != s2[i]){
			cout << "000";
			return 0;
		} 
	}
	cout << 1;
	if(s1[n - 1] == 'A' && s2[n - 1] == 'B' || s1[n - 1] == 'B' && s2[n - 1] == 'A' || s1[n - 1] == 'A' && s2[n - 1] == 'C' || s1[n - 1] == 'C' && s2[n - 1] == 'A' || s1[n - 1] == 'B' && s2[n - 1] == 'C' || s1[n - 1] == 'C' && s2[n - 1] == 'B' || s1[n - 1] == 'D' && s2[n - 1] == 'F'|| s1[n - 1] == 'F' && s2[n - 1] == 'D') cout << 1;
	else{
		cout << "00";
		return 0;
	}
	if(s1[n - 1] == s2[n - 1] - 1 || s1[n - 1] == s2[n - 1] + 1) cout << 1;
	else cout << 0;
	return 0;
}
