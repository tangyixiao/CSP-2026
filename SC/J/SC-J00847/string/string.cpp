#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200010
int n,a[N];
string s,in;
bool ishuiwen(string s){
	int l=s.size();
	int p=0;
	while(p<=l/2) {
		if(s[p]!=s[l-1-p]) return false;
		p++;
	}
	return true;
}
int change(string s){
	if(ishuiwen(s)) return 0;
	int cnt=0;
	int l=s.size();
//	if(l%2==1) {
		int p=0;
		while(p<l/2) {
			if(s[p]!=s[l-p-1]) cnt++;
			p++;
		}
//	}
	return cnt;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>in;
		for(int j=1;j<=a[i];j++) s+=in;
	}
	cout<<change(s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}