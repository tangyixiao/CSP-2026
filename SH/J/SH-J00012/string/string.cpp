#include <bits/stdc++.h>
using namespace std;
struct str{
	int a;
	char c;
};
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	vector<str> s(n+1);
	for (int i=1;i<=n;i++) cin >> s[i].a >> s[i].c;
	int l = 1,r = n;
	while(l <= r){
		if (s[l].c == s[r].c){
			if (s[l].a == s[r].a) l++,r--;
			else if (s[l].a < s[r].a){
				s[r].a -= s[l++].a;
			} 
			else{
				s[l].a -= s[r--].a;
			}
		}
		else{
			if (s[l].a == s[r].a) {
				ans += s[l].a;
				l++,r--;
			}
			else if (s[l].a < s[r].a){
				s[r].a -= s[l].a;
				ans += s[l].a;
				l++;
			}
			else{
				s[l].a -= s[r].a;
				ans += s[r].a;
				r--;
			}
		}
	} 
	cout << ans;
	return 0;
}
