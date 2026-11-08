#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200000;
struct subs{
	long long l;
	char c;
}ss[MAXN+5];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> ss[i].l >> ss[i].c;
	}
	int f = 1, d = n;
	long long temp = 0; 
	while(f <= d){
		long long g = min(ss[f].l, ss[d].l);
		if(ss[f].c != ss[d].c){
			if(temp){
				ans += min(g, temp);
			}else{
				ans += g;
			}
		}
		if(!temp){
			temp = abs(ss[f].l - ss[d].l);
		}else{
			temp -= min(g, temp);
		}
		if(ss[f].l < ss[d].l){
			f++;
		}else if(ss[f].l == ss[d].l){
			f++;
			d--;
		}else{
			d--;
		}
	}
	cout << ans;
	return 0;
} 
