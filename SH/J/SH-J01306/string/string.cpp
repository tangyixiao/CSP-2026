#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;
long long n,l1,l2,cnt,ans;
struct node{
	int a;
	char c;
}s[maxn],s1[maxn],s2[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> s[i].a >> s[i].c;
	}
	for(int i = 1;i <= n;i++){
		s1[i].a = s[i].a;
		s1[i].c = s[i].c;
	}
	for(int i = n;i >= 1;i--){
		s2[n-i+1].a = s[i].a;
		s2[n-i+1].c = s[i].c;
	}
	l1 = 1;
	l2 = 1;
	long long num = 0;
	while(1){
		if(s1[l1].c != s2[l2].c){
			if(s1[l1].a > s2[l2].a) num = s2[l2].a,l2++,cnt++,s1[l1].a -= num;
			else if(s1[l1].a < s2[l2].a) num = s1[l1].a,l1++,cnt++,s2[l2].a -= num;
			else num = s1[l1].a,l1++,l2++,cnt+=2;
			ans += num;
		}
		else {
			if(s1[l1].a > s2[l2].a) num = s2[l2].a,l2++,cnt++,s1[l1].a -= num;
			else if(s1[l1].a < s2[l2].a) num = s1[l1].a,l1++,cnt++,s2[l2].a -= num;
			else num = s1[l1].a,l1++,l2++,cnt+=2;
		}
		if(cnt >= n) break;
	}
	cout << ans;
	return 0;
} 
