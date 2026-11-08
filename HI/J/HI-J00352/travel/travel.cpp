#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,m;
	string s,c;
	cin >> n >> s >> m >> c;
	if(n[1] != m[1]){
		cout << "0000";
		return 0;
	}else if(n[1] == m[1]){
		cout << "1";
		if(s[1] == c[1]){
			cout << "1";
			if((s[2]-'0' <= 19 && c[2]-'0' <= 19) || (s[2]-'0' > 19 && c[2]-'0' > 19)){
				cout << "1";
				if(s[2]-'0'+1 == c[2]-'0' || c[2]-'0'+1 == s[2]-'0'){
					cout << "1";
				}else cout << "0";
			}else cout << "00";
		}else cout << "000";
	}
	return 0;
}
