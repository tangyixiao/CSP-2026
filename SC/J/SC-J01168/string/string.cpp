#include<bits/stdc++.h>
using namespace std;
char ch[1000000];
long long str[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	string s;
	long long num=0;
	for(long long i = 1;i <= n;i++){
		cin >> str[i] >> ch[i];
		for(long long j=num;j<str[i]+num;j++){
			s[j] = ch[i];
		}
		num += str[i];
	}
	bool b = true;
	int ans = 0;
	for(int i=0;i<num;i++){
		if(s[i] != s[num-i-1]){
			b = false;
			ans++;
		}
	}
	cout << ans/2;
	return 0;
}