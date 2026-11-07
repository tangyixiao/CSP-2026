#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,cnt,a,l;
char c;
string s,s2;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> a >> c;
		for (int j=1;j<=a;j++) s+=c;
	}
	s2=s;
	
	reverse(s2.begin(),s2.end());
	l=s.length();
	l/=2;
	for (int i=0;i<=l-1;i++){
		if (s[i]!=s2[i]) cnt++;
	}
	cout << cnt;
	
	return 0;
}
