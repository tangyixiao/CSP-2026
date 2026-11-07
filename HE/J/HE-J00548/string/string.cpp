#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a;
string s,c;
int ans;
void f(int x,int len){
	if(s[x]!=s[len-x]){
		ans++;
	}
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int ansi=1;
	for(int i=1;i<=n;i++){
		cin>>a>>c[i];
		for(int j=1;j<=a;j++){
			s[ansi]=c[i];
			ansi++;
		}
	}
	for(int i=1;i<=ansi/2;i++){
		f(i,ansi);
	}
	cout<<ans;
	return 0;
}
