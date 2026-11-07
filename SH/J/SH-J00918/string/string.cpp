#include <bits/stdc++.h>
using namespace std;

string t;
#define int long long
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		string s;
		cin>>s;
		while(m--){
			t+=s;
		}
	}
	int x=t.size()-2;
	for(int i=0;i*2<t.size();i++){
		if(t[i]!=t[x+1-i])cnt++;
	}
	cout<<cnt;
	return 0;
}
