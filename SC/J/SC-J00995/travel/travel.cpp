#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		cout << 1;
		string s = s1.substr(0,2);
		string t = s2.substr(0,2);
		if (s == t){
			cout << 1;
			if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')){
				cout << 1;
				int m = abs(s1[2]-s2[2]);
				if ((m == 1 && s1[2] <= 'C') || (m == 2 && s1[2] >= 'D')) cout << 1;
				else cout << 0;
			}else
				cout << "00";
		}else
			cout << "000";
	}else 
		cout << "0000";
	return 0;
}