#include<bits/stdc++.h>
#define int long long
#define cin std::cin
#define cout std::cout
#define endl '\n'
using namespace std;
const int maxn=2e5+5;
int n,a[maxn],ans=0;
char c[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			l++,r--;
		}else if(a[l]<a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			a[r]-=a[l];
			l++;
		}else{
			if(c[l]!=c[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}
	}
	cout<<ans<<endl;
	return 0;
}