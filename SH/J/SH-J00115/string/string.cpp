#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n,cnt=0;
	string s="";
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		while(a--)s+=c;
	}
	ll l=s.size();
	if(l%2==1){
		for(int i=0;i<l/2;i++){
			if(s[i]!=s[l-1-i])cnt++;
		}
	}
	else{
		for(int i=0;i<l/2+1;i++){
			if(s[i]!=s[l-1-i])cnt++;
		}
	}
	cout<<cnt;
}
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--)solve();
	return 0;
}

