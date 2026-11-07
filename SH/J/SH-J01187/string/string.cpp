#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 2e5 + 10;
int n, ans;
struct block{
	int len;
	char c;
}s[maxn];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 0;i<n;i++) cin >> s[i].len >> s[i].c;
	int lb = 0, ln = 0, rb = n-1, rn = s[n-1].len-1;
	while(lb<rb){
		if(s[lb].len-ln < rn+1){
			if(s[lb].c != s[rb].c){
				ans += s[lb].len-ln;
			}
			rn-=s[lb].len-ln;
			lb++; ln=0; 
		} else if(s[lb].len-ln > rn+1){
			if(s[lb].c != s[rb].c){
				ans += rn+1;
			}
			ln+=rn+1;
			rb--; rn = s[rb].len-1;
		}
		else{
			if(s[lb].c != s[rb].c){
				ans += rn+1;
			}
			lb++; ln=0;
			rb--; rn = s[rb].len-1;
		}
		//cout << lb << " " << ln << " " << rb << " " << rn << endl;
	}
	cout << ans;
}

