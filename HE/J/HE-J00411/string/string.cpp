#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int ans = 0;
struct Node{
	int a;
	char c;
}s[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> s[i].a >> s[i].c;
	}
	int l = 1,r = n;
	while(l <= r){
		if(s[l].c == s[r].c){
			int js = abs(s[l].a - s[r].a);
			if(s[l].a > s[r].a){
				s[l].a = js;
				r--;
			}
			else if(s[l].a < s[r].a){
				s[r].a = js;
				l++;
			}
			else{
				l++;
				r--;
			}
		}
		else{
			int js = 0;
			if(s[l].a > s[r].a) {
				ans += s[r].a;
				s[l].a = s[l].a-s[r].a;
				r--;
			}
			else if(s[l].a < s[r].a){
				ans += s[l].a;
				s[r].a = s[r].a-s[l].a;
				l++;
			}
			else{
				ans += s[l].a;
				l++;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}
