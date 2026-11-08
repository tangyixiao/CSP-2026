#include<bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define pii pair<int, int>
#define lowq(type) priority_queue<type, vector<type>, greater<type>>
using namespace std;
struct node {
	string tr, id;
} a, b;
struct node1 {
	int tr, id;
} a1, b1;
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	fastio;
	cin >> a.tr >> a.id >> b.tr >> b.id;
	for(auto c : a.tr) {
		a1.tr = a1.tr * 10 + c - 48;
	}
	for(auto c : b.tr) {
		b1.tr = b1.tr * 10 + c - 48;
	}
	if(a1.tr != b1.tr) {
		cout << "0000" << endl;
		return 0;
	}
	for(int i = 0; i < 2; i++) {
		a1.id = a1.id * 10 + a.id[i];
		b1.id = b1.id * 10 + b.id[i];
	}
	if(a1.id != b1.id) {
		cout << "1000" << endl;
		return 0;
	}
	if(a.id[2] <= 'C' && b.id[2] > 'C') {
		cout << "1100" << endl;
		return 0;
	}
	if(b.id[2] <= 'C' && a.id[2] > 'C') {
		cout << "1100" << endl;
		return 0;
	}
	if(a.id[2] == 'C' && b.id[2] == 'A') {
		cout << "1110" << endl;
		return 0;
	}
	if(a.id[2] == 'A' && b.id[2] == 'C') {
		cout << "1110" << endl;
		return 0;
	}
	cout << "1111" << endl;
	return 0;
}
