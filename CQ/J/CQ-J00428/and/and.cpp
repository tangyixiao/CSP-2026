#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e6+5;
ll n=6,m=7,a[N],ans=0;
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=0;i<n-1;i++){
			ll op=a[i];
			for(int j=i+1;j<n;j++){
				op=op&a[j];
				ans=max(ans,op);
				op=a[i];
			}
		}
	}else if(m==n){
		ans=a[0];
		for(int i=1;i<n;i++){
			ans=ans&a[i];
		}
	}else if(m==1){
		sort(a,a+n);
		ans=a[n-1];
	}
	
	cout<<ans<<'\n';
	return 0;
}
