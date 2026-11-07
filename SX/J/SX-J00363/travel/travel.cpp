#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		//在同一车厢
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') {
				cout << 1;
				if (abs(s1[2] - s2[2]) == 1)
					cout << 1;
				else
					//ABC侧但不相邻
					cout << 0;
			} else if (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F') {
				cout << 1;
				if (s1[2] == 'D' && s2[2] == 'F')
					cout << 1;
				else if (s2[2] == 'D' && s1[2] == 'F')
					cout << 1;
				else
//				DF侧但不相邻
					cout << 0;
			} else
				//不在同一侧
				cout << "00";
		} else
			//不在同一排
			cout << "000";
	} else
		//不在同车厢
		cout << "0000";

	return 0;
}/*
NOCE
NOWA
NORE
NOTLE
NOMLE
PLEASE HELP ME
头文件
IOS ENDL
FREOPEN
priority_queue<int,vector<int>,less<int> > q;
NORE
*/