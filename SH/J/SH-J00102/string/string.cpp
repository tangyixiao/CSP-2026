#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s = " ";
	for(int i = 1;i <= n;i++){
		int x;
		char c;
		cin >> x >> c;
		for(int i = 1;i <= x;i++){
			s += c;
		}
	}
	long long ans = 0;
	for(int i = 1;i <= s.size() / 2;i++){
		if(s[i] != s[s.size() - i])    ans++;
	}
	cout << ans;
	return 0;
}
