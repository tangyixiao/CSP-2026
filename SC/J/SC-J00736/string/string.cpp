#include<bits/stdc++.h>
using namespace std;
#define endl '/n'
string s;
int n,a,ans;
char c;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int i=1;i<=a;i++) s+=c;
	}
	int l=s.size();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]) ans++;
		else continue;
	}
	cout<<ans;
	return 0;
}
// 3 2 a 2 b 1 c
/*2 2 a 3 a*/