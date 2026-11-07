#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

bool check1(string x, string y){ // 同一车厢
	return x == y;
}

bool check2(string x, string y){ // 同一排
	return x[0] == y[0] && x[1] == y[1];
}

bool check3(string x, string y){ // 同一侧
	if(x[2] >= 'D' && y[2] <= 'C') return false;
	if(y[2] >= 'D' && x[2] <= 'C') return false;
	return true;
}

bool check4(string x, string y){ // 相邻
	if(!check3(x, y)) return false;
	if(x[2] + 1 == y[2]) return true; // 连续
	if(y[2] + 1 == x[2]) return true;
	return false;
}

int main(){
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	bool Check1 = check1(c1, c2), Check2 = check2(s1, s2), Check3 = check3(s1, s2), Check4 = check4(s1, s2);
	if(Check1) cout << 1;
	else cout << 0;
	
	if(Check1 && Check2) cout << 1;
	else cout << 0;
	
	if(Check1 && Check2 && Check3) cout << 1;
	else cout << 0;
	
	if(Check1 && Check2 && Check3 && Check4) cout << 1;
	else cout << 0;
	return 0;
}
/*

预估 100

8:30 - 8:55 通过所有大样例

T1

c1, c2 : 车厢号
s1, s2 : 对应车厢的合法座位

在同一车厢 : c1 == c2
在同一排 : s1 前两位 == s2 前两位
在同一侧 : 

*/