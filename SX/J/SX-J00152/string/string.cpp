#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int n;
ull a;
char c;
string tri;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	while(n--){
		cin >> a >> c;
		for(ull i = 1;i <= a;i++){
			tri += c;
		}
	}
	ull cnt = 0;
	ull lens = tri.size();
	bool cs = lens % 2 == 1 ? 1 : 0;
	for(ull i = 0;i < (cs == 1 ? (lens / 2 + 1) : lens / 2);i++){
		if(tri[i] != tri[lens - i - 1]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
