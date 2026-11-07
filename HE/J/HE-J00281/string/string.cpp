#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+10;
bool bing(string a){
	string b;
	for(int i = 0;i < a.size();i ++){
		b[i] = a[a.size()-1-i];
	}
	if(a == b) return true;
	return false;
}
ll n;
ll a[N];
char c[N];
ll l;
string s;
ll ans = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
//	string a;
//	cout << bing(a);
	for(int i = 1;i <= n;i ++){
		cin >> a[i] >> c[i];
	}
	
	for(int i = 1;i <= n;i ++){
		int AAA = a[i];
		while(AAA --){
			s += c[i];
		}
	}
//	cout << s;
	if(bing(s) == 1){
	cout << 0;
	return 0;
	}
	for(int i = 0;i < s.size();i ++){
		if(!bing(s)&&s[i] != s[s.size()-1-i]){
			ans ++;
			s[s.size()-1-i] = s[i];
		}
	}
	cout << ans;
	return 0;
}
