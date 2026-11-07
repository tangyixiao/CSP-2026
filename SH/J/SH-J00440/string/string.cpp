#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	int a;
	char c;
}s[200010];
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	long long s_size = 0;
	for(int i = 1; i <= n; i++){
		cin >> s[i].a >> s[i].c;
		s_size += s[i].a;
	}
	s_size /= 2;
	int l = 1 , r = n;
	long long nowsuml = s[1].a , nowsumr = s[n].a , ans = 0;
	while(l < r){
		if(s[l].c != s[r].c){
			int mi = min(nowsuml , nowsumr);
			ans += mi;
			nowsuml -= mi;
			nowsumr -= mi;
			if(nowsuml == 0){
				l++;
				nowsuml = s[l].a;
			}
			if(nowsumr == 0){
				r--;
				nowsumr = s[r].a;
			}
		}else{
			int mi = min(nowsuml , nowsumr);
			nowsuml -= mi;
			nowsumr -= mi;
			if(nowsuml == 0){
				l++;
				nowsuml = s[l].a;
			}
			if(nowsumr == 0){
				r--;
				nowsumr = s[r].a;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
