#include <bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
};
long long ans;
node s[200007];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1 ;i <= n ;i ++){
		cin >> s[i].a >> s[i].c;
	}
	int l = 1 , r = n;
	while(l <= r){
		if(s[l].c==s[r].c){
			if(s[l].a > s[r].a){
				s[l].a = s[l].a - s[r].a;
				r--;
			}
			else if(s[l].a==s[r].a){
				l ++;
				r --;
			}
			else if(s[l].a<s[r].a){
				s[r].a = s[r].a - s[l].a;
				l ++;
			}
		}
		else if(s[l].c!=s[r].c){
			if(s[l].a > s[r].a){
				ans += s[r].a;
				s[l].a = s[l].a - s[r].a;
				r--;
			}
			else if(s[l].a==s[r].a){
				ans += s[r].a;
				l ++;
				r --;
			}
			else if(s[l].a<s[r].a){
				ans += s[l].a;
				s[r].a = s[r].a - s[l].a;
				l ++;
			}
		}
	}
	cout << ans;
}
