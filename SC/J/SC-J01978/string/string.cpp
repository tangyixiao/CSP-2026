#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int a;char c;
}zw[200005];
int n,a,ans=0;char c;string s;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	s="";
	cin>>n;
	if(n==1){
		cin>>a>>c;
		cout<<0;
	}
	else{
		int max_gcd;
		for(int i=1;i<=n;i++){
			cin>>zw[i].a>>zw[i].c;
		}
		max_gcd=zw[1].a;
		for(int i=2;i<=n;i++){
			max_gcd=__gcd(max_gcd,zw[i].a);
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=zw[i].a/max_gcd;j++)
				s=s+zw[i].c;
		}
		for(int l=0,r=s.size()-1;l<r;l++,r--){
			if(s[l]!=s[r]){
				ans++;
			}
		}
		cout<<ans*max_gcd;
	}
	return 0;
}