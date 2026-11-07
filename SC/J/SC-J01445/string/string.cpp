#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long n,  l, ans;
string s, s2;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		long long a;
		char t;
		scanf("%lld %c", &a, &t);
		for(int j = 1;j <= a;j++)
			s2 = t + s2;
	}
	s = s2;
	l = s.size();
	s = " " + s;
	s2 = " " + s2;
	for(long long  i = 1;i <= l;i++)
		s2[i] = s[l+1-i];
	for(long long i = 1;i <= l;i++)
		if(s[i] != s2[i]) ans++;
	cout << ans / 2 << endl;
	
	return 0;
}