#include<bits/stdc++.h>
using namespace std;

struct sr{
	int a;char c;
}s[200005];
int n;
long long l,ans,cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> s[i].a >> s[i].c;
		l += s[i].a;
	}
	l /= 2;
	int i=1,j=n;
	while(cnt < l){
		int mn = min(s[i].a,s[j].a);
		if(s[i].c != s[j].c) ans += mn;
		cnt += mn;
		s[i].a -= mn;
		s[j].a -= mn;
		if(s[i].a == 0) i++;
		if(s[j].a == 0) j--;
	}
	cout << ans;
	return 0;
}
