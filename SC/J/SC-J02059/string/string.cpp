#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MN = 2e5 + 20;
struct Str{
	int num;
	char car;
} s[MN];
int n,ans = 0;
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	scanf("%lld",&n);
	int pos = 1;
	for(int i = 1;i <= n;i++){
		int a;
		char b;
		scanf("%lld",&a);
		cin >> b;
		if(b == s[pos - 1].car){
			s[pos - 1].num += a; 
		}
		else{
			s[pos] = {a,b};
			pos++;
		}
	}
	pos--;
	int l = 1,r = pos;
	while(l < r){
		int m = min(s[l].num,s[r].num);
		if(s[l].car != s[r].car){
			ans += m;
		}
		s[l].num -= m;
		s[r].num -= m;		
		if(s[l].num == 0) l++;
		if(s[r].num == 0) r--;
	}
	printf("%lld",ans);
	return 0;
}
