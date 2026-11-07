#include<bits/stdc++.h>
using namespace std;
long long n; 
long long cnt = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin >> n;
	string s;
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		long long x;
		cin >> x;
		ans += x;
		char c;
		cin >> c;
		for(long long j = 0;j < x;j++){
			s += c;
		}
	}
	long long l = 0;
	long long r = 0;
	if(ans % 2 != 0){
		l = ans/2;
		r = ans/2;
	}else{
		l = ans/2-1;
		r = ans/2;
	}
	while(true){
		if(l < 0){
			break;
		}
		if(s[l] != s[r]){
			cnt++;
		}
		l--;
		r++;
	}
	cout << cnt << '\n';
	return 0;
}



