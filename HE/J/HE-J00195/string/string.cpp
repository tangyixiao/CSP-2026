#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int T,a[N];
	string s;
	char c[N];
	cin>>T;
	for(int i=1;i<=T;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	int l=1,r=T;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]<a[r]){
				//ans+=(a[r]-a[l]);
				a[r]-=a[l];
				l++;
			}else if(a[l]>a[r]){
			//	ans+=(a[l]-a[r]);
				a[l]-=a[r];
				r--;
			}else {
				l++;
				r--;
			}
		}else{
			if(a[l]<a[r]){
				ans+=(a[r]-a[l]);
				a[r]-=a[l];
				l++;
			}else if(a[l]>a[r]){
				ans+=(a[l]-a[r]);
				a[l]-=a[r];
				r--;
			}else {
				ans+=a[l];
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
