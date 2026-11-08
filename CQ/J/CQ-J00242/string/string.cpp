#include <bits/stdc++.h>
using namespace std;
int n,cnt,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		char y;cin>>y;
		for(int j=cnt;j<cnt+x;j++) s[j]=y;
		cnt+=x;
	}
	for(int i=0;i<cnt/2;i++){
		if(s[i]!=s[n-i+1]) ans++;
	}
	cout<<ans;
	return 0;
}

