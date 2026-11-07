#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
char b[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int l=1,r=n;
	int L=1,R=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];	
	}
	R=a[n];
	int ans=0;
	int nl=a[1],nr=a[n];
	while(l<r){
		if(b[l]!=b[r]){
			ans+=min(nl,nr);
		}
		if(nl>nr){
			nl-=nr;
			nr=a[r-1];
			r--;
		}
		else if(nl<nr){
			nr-=nl;
			nl=a[l+1];
			l++;
		}
		else{
			nl=a[l+1];
			nr=a[r-1];
			l++;
			r--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
// si lu:an ti mu mo ni
