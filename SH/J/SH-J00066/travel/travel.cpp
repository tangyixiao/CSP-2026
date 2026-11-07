#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
bool check2(string s1,string s2){
	return s1[0] == s2[0] && s1[1] == s2[1];
}
bool check3(string s1,string s2){
	if(s1[2] >= 'D' && s2[2] >= 'D') return 1;
	if(s1[2] <= 'C' && s2[2] <= 'C') return 1;
	return 0;
}
bool check4(string s1,string s2){
	if(s1[2] + 1 == s2[2]) return 1;
	if(s1[2] - 1 == s2[2]) return 1;
	return 0;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000" << endl;
	}else{
		if(!check2(s1,s2)) cout << "1000" << endl;
		else{
			if(!check3(s1,s2)) cout << "1100" << endl;
			else{
				if(!check4(s1,s2)) cout << "1110" << endl;
				else{
					cout << "1111" << endl;
				}
			}
		} 
	}
	return 0;
}

