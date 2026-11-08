#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n,a[N],cnt = 0;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long l = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> c[i];
		for(int j = 0;j < a[i];j++){
			s[l] = c[i];
			l++;
		}
	}
	long long r = s[0],count = 1;
	for(int i = 1;i < l;i++){
		if(r == s[i]) count++;
	}
	if(count == l){
		cout << 0;
		return 0;
	}
	for(int i = 0;i < l/2;i++){
		if(s[i] != s[l-i]) cnt++;
	}
	cout << cnt;
	return 0;
}
