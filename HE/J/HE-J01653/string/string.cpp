#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
const int MAXM = 1e8 + 5;

char s[MAXN];

int n;
long long sum = 1;
long long ans;

int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 1; i <= n ; i++){
		int cnt;
		char a;
		cin >> cnt >> a;
		for(int j = 1 ; j <= cnt ; j++){
			s[sum] = a;
			sum++;
		}
	}
	sum -= 1;
	for(int i = 1; i <= ceil(sum * 1.0 /2); i++){
		if(s[i] != s[sum - i + 1])
		ans++;
	}
	cout << ans;
}
