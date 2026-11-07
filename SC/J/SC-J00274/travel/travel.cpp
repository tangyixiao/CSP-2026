#include<bits/stdc++.h>
using namespace std;
int c1;
string s1;
int c2;
string s2;
bool check(string cnt1,string cnt2){
	if(cnt1[2] >= 'A' && cnt1[2] <= 'C' && cnt2[2] >= 'A' && cnt2[2] <= 'C') return 1;
	if(cnt1[2] >= 'D' && cnt1[2] <= 'F' && cnt2[2] >= 'D' && cnt2[2] <= 'F') return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000";
		return 0;
	}else{
		cout << "1";
	}
	if(s1[0] != s2[0] || s1[1] != s2[1]){
		cout << "000";
		return 0;
	}else{
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout <<"1";
		}else{
			cout << "000";
			return 0;
		}
	}
	if(check(s1,s2) == 1){
		cout << "1";
	}else{
		cout << "00";
		return 0;
	}
	if(s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}