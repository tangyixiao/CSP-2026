#include<bits/stdc++.h>
using namespace std;
string tr1, tr2, s1, s2;
bool f1 = 0, f2 = 0, f3 = 0, f4 = 0;
bool cp1(string &x, string &y){
	for(int i = 0;i < 2;i++)if(x[i] != y[i])return 0;
	return 1;
}
bool cp2(string &x, string &y){
	if((x[2] - 'A' <= 2 && y[2] - 'A' <= 2) || (x[2] - 'A' > 2 && y[2] - 'A' > 2))return 1;
	return 0; 
}
bool cp3(string &x, string &y){
	if(x[2] + 1 == y[2] || x[2] - 1 == y[2])return 1;
	return 0;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> tr1 >> s1 >> tr2 >> s2;
	if(tr1 == tr2)f1 = 1;
	if(f1 && cp1(s1, s2))f2 = 1;
	if(f1 && f2 && cp2(s1, s2))f3 = 1;
	if(f1 && f2 && f3 && cp3(s1, s2))f4 = 1;
	cout << f1 << f2 << f3 << f4 << '\n';
	return 0;
} 