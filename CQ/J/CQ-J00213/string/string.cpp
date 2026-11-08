#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+6;
int n,a[N];
int l,r,x,y,k,yly;
char s[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>s[i];
	l=1,r=n,x=y=0;
	for(;l<r;){
		if(!a[l]) l++;
		if(!a[r]) r--;
		k=min(a[l],a[r]);
		if(s[l]!=s[r]) yly+=k;
		a[l]-=k,a[r]-=k; 
	}
	cout<<yly;
	return 0;
}
