#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int ans,n,a[200005],b[200005],l;
char s[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		b[i]=b[i-1]+a[i];
	}
	int j=n;
	for(int i=1;b[i]<=b[n]/2;i++){
		l+=a[i];
		while(l>0){
			if(s[i]!=s[j]){
				ans+=min(l,a[j]);
			}
			if(l>=a[j]){
				l-=a[j];
				j--;
			}else{
				a[j]-=l;
				l=0;
			}
		}
	}
	cout<<ans;
	return 0;
} 