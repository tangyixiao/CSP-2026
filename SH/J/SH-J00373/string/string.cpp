#include <bits/stdc++.h>
using namespace std;

struct Block{
	long long a;
	char c;
} b[200009];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i){
		cin >> b[i].a >> b[i].c;
	}
	long long nl = 1, nr = n, sl = b[1].a, sr = b[n].a, ans = 0;
	while (nl <= nr){
		if (b[nl].c != b[nr].c){
			if (sl >= sr){
				ans += sr;
				sl -= sr;
				--nr;
				sr = b[nr].a;
			}
			else{
				ans += sl;
				sr -= sl;
				++nl;
				sl = b[nl].a;
			}
		}
		else{
			if (sl >= sr){
				sl -= sr;
				--nr;
				sr = b[nr].a;
			}
			else{
				sr -= sl;
				++nl;
				sl = b[nl].a;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
