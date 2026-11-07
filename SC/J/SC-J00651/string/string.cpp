#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+5;
ll a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	ll l=1,r=n,cnt=0;
	while(l<=r){
		if(a[l]>a[r]){
			if(c[l]==c[r]){
				a[l]-=a[r];
			}else{
				a[l]-=a[r];
				cnt+=a[r];
			}
			r--;
		}else{
			if(c[l]==c[r]){
				a[r]-=a[l];
			}else{
				a[r]-=a[l];
				cnt+=a[l];
			}
			l++;
		}
	}
	cout<<cnt;
	return 0;
}