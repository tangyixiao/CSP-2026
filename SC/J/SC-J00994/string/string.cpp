#include<bits/stdc++.h>
using namespace std;
const int Maxn = 1e6+10;
struct st{
	long long x;
	char c;
}s[Maxn];
int head = 1,tail = 0;
long long sl[Maxn],sr[Maxn];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,last = 1;cin >> n;
	long long L = 0;
	for(int i = 1;i <= n;i++){
		cin >> s[i].x >> s[i].c;
	}
	tail = n;
	long long ans = 0;
	while(head <= tail){
		while(s[tail].x < s[head].x){
			s[head].x -= s[tail].x;
			if(s[head].c != s[tail].c){
				ans += s[tail].x;
			}
			tail--;
		}
		if(s[head].c != s[tail].c){
			ans += s[head].x;
		}
		s[tail].x -= s[head].x;head++;
	}
	cout << ans;
	return 0;
} 