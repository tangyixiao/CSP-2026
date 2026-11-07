#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
#define ll long long
int n;
ll a[N],ans;
char c[N];
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int l=1,r=n;l<r;){
		if(a[l]>a[r]){
			if(c[l]==c[r]){
				a[l]-=a[r];
				r--;
			}else{
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
		}else if(a[l]<a[r]){
			if(c[l]==c[r]){
				a[r]-=a[l];
				l++;
			}else{
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}
		}else{
			if(c[l]==c[r]){
				l++,r--;
			}else{
				ans+=a[l];
				l++,r--;
			}
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
