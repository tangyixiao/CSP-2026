#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],l=0,ans=0;
char c[200005];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[++l]=c[i];
		}
	}
	if(l%2){
		int mid=(l>>1)+1;
		for(int i=mid+1;i<=l;i++){
			if(s[i]!=s[mid-(i-mid)])ans++;
		}
	}else{
		int mid=(l>>1);
		for(int i=mid+1;i<=l;i++){
			if(s[i]!=s[mid-(i-mid-1)])ans++;
		}
	}
	cout<<ans;
	return 0;
}