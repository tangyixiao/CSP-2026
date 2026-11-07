#include<bits/stdc++.h>
using namespace std;
#define int long long
struct sssss{
	int num;
	char c;
};
sssss s[200100] = {};
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> s[i].num >> s[i].c;
	}
	int zo = 1 , yo = n;
	int ans = 0;
	while(zo != yo){
		if(s[zo].c == s[yo].c){
			int t = min(s[zo].num , s[yo].num);
			s[zo].num -= t;
			s[yo].num -= t;
		}else{
			int t = min(s[zo].num , s[yo].num);
			s[zo].num -= t;
			s[yo].num -= t;
			ans += t;
		}
		if(s[zo].num == 0){
			zo++;
		}
		if(s[yo].num == 0){
			yo--;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
