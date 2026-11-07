#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=100+1;
int n,x;
string s="";
char ch;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>ch;
		for(int j=1;j<=x;j++){
			s=s+to_string(char(i));
		}
	}
	cout<<s<<"\n";
	int L=s.length()-1,ans=0;
	cout<<L<<"\n";
	bool flag=true;
	for(int i=0;i<=L;i++){
		if(s[i]!=s[L-i]){
			flag=false;
			break;
		}
	}
	if(flag==true) cout<<0;
	else{
		for(int i=0;i<=L;i++){
			if(s[i]!=s[L-i]) ans++;
		}
		cout<<ans;
	}
	return 0;
}