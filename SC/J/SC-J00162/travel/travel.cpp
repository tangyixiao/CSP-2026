#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int id, pos;
	char ch;
}r, x;
signed main(){
#ifndef LCY
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
#else
#endif
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		r.id = r.id * 10 + (s[i] - '0'); 
	cin >> s;
	for (int i = 0 ; i < s.size(); i++){
		if (s[i] >= '0' && s[i] <= '9'){
			r.pos = r.pos * 10 + (s[i] - '0');
		}
		else {
			r.ch = s[i];
		}
	}
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		x.id = x.id * 10 + (s[i] - '0'); 
	cin >> s;
	for (int i = 0 ; i < s.size(); i++){
		if (s[i] >= '0' && s[i] <= '9'){
			x.pos = x.pos * 10 + (s[i] - '0');
		}
		else {
			x.ch = s[i];
		}
	}
	if (r.id != x.id){
		cout << "0000";
		return 0;
	}
	if (r.pos != x.pos){
		cout << "1000";
		return 0;
	}
	if (r.ch <= 'C' && r.ch >= 'A' && x.ch > 'C'){
		cout << "1100";
		return 0;
	}
	if (x.ch <= 'C' && x.ch >= 'A' && r.ch > 'C'){
		cout << "1100";
		return 0;
	}
	if (r.ch == 'A' && x.ch != 'B'){
		cout << "1110";
		return 0;
	}
	if (r.ch == 'B' && x.ch != 'A' && x.ch != 'C'){
		cout << "1110";
		return 0;
	}
	if (r.ch == 'C' && x.ch != 'B'){
		cout << "1110";
		return 0;
	}
	if (r.ch == 'D' && x.ch != 'F'){
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}