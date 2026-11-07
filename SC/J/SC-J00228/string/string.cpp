#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
int n,c1,as,l,r,ans;
char s1;
vector <char> s;
int hw(){
	while(l<=r) {
		if(s[l]!=s[r]) ans++;
		l++,r--;
	}
	return ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>c1>>s1;
		as+=c1;
		while(c1--) s.push_back(s1);
	}
	l=0,r=as-1;
	cout<<hw();
	return 0;
}
/*
		||||||||||
	我	|
		|	考
		|	场
		|	
		||||||||||
	____教学楼,
	一__解千愁.
*/