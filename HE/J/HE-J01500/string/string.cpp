#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2e5+10;
int a[MAXN];
char s[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	if(n<2){
		cout<<0;
		return 0;
	}
	ll l=1,r=n,ans=0;
	while(l<r){
		int w=min(a[l],a[r]);
		a[l]-=w;
		a[r]-=w;
		if(s[l]!=s[r]){
			ans+=w;
		}
		if(a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
	}
	cout<<ans;
	return 0;
}
