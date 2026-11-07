#include<bits/stdc++.h>
using namespace std;
int n,pos,ans;string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int cnt;char a;
		cin>>cnt>>a;
		for(int j=pos;j<(pos+cnt);j++) s[j]=a;
		pos+=cnt;
	}
	for(int i=0;i<(pos/2);i++){
		if(s[i]!=s[pos-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}