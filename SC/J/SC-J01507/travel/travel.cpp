#include<bits/stdc++.h>
#define ll long long
using namespace std;
int c,x;
string s,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c >> s >> x >> y;
	if(c != x){
		cout << 0 << 0 << 0 << 0 << endl;
		return 0;
	}
	cout << 1;
	int se = 0,ye = 0;
	for(int i = 0;i < 2;i++){
		se = se * 10 + (s[i] - '0');
		ye = ye * 10 + (y[i] - '0');
	}
	if(se != ye){
		cout << 0 << 0 << 0;
		return 0;
	}
	cout << 1;
	if((s[2] < 'D' && y[2] > 'C')||(y[2] < 'D' && s[2] > 'C')){
		cout << 0 << 0;
		return 0;
	}
	cout << 1;
	if((s[2] == 'D' && y[2] == 'F')||(s[2] == 'D' && y[2] == 'F')){
		cout << 1;
		return 0;
	}
	if(s[2] + 1 == y[2]||s[2] - 1 == y[2]){
		cout << 1;
		return 0;
	}
	cout << 0;
	return 0;
}