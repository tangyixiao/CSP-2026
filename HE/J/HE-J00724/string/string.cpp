#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN];
string b[MAXN];
int n,m;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<r){
//		cout<<a[l]<<' '<<a[r]<<'\n';
//		if(a[l]==0){
//			l++;
//		}
//		if(a[r]==0){
//			r--;
//		}
		if(a[l]==a[r]){
			if(b[l]==b[r]){
				l++;
				r--;
			}
			else{
				ans+=a[l];
				l++;
				r--;
			}
		}
		else{
			if(b[l]!=b[r]){
				ans+=min(a[l],a[r]);
			}
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else{
				a[l]-=a[r];
				r--;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}  
