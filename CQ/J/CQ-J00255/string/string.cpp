#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
char c[N];
int n,s[N],ans;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>c[i];
		s[i]+=s[i-1];
	}
	for(int i=1;i<=n;i++){
		if(s[i-1]+1>s[n]/2)
			break;
		int l=s[i-1]+1,r=min(s[n]/2,s[i]),wz,l1,r1;
		l1=s[n]-r+1,r1=s[n]-l+1;
		wz=lower_bound(s+1,s+1+n,l1)-s;
		if(c[wz]!=c[i])
			ans+=min(r1,s[wz])-l1+1;
		for(int j=wz+1;j<=n;j++){
			if(s[j-1]+1>r1)
				break;
			if(c[j]!=c[i])
				ans+=min(s[j],r1)-s[j-1];
		}
	}
	cout<<ans;
	return 0;
}
