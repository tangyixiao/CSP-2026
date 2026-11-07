#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a, b, s1, s2, r, x, p, q;
bool f1, f2, f3, f4;
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s1 >> b >> s2;
	for(int i = 0; i < 2; i++) r += s1[i];
	for(int i = 0; i < 2; i++) x += s2[i];
	f1 = (a == b);
	if(f1 == 0) f2 = 0;
	else f2 = (r == x);
	if(f2 == 0) f3 = 0;
	else{
		if(s1[2] >= 'D' && s2[2] <= 'C') f3 = 0;
		else if(s1[2] <= 'C' && s2[2] >= 'D') f3 = 0;
		else f3 = 1;
	}
	if(f3 == 0) f4 = 0;
	else{
		if(abs(int(s1[2] - s2[2])) <= 1){
			if((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C')) f4 = 0;
			else f4 = 1;
		}
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
} 