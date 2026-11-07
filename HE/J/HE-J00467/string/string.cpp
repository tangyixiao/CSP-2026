#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2*10e5;
int n,l=1,r,ans,sum;
int a[N];
char b[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}for(int i=1;i<=r;i++){
		if(a[l]=a[r]){
		if(b[l]==b[r]){
			l++;
			r--;
		}else{
			ans+=a[l];
			l++;
			r--;
		}	
		}else if(a[l]>a[r]&&b[l]!=b[r]){
			ans+=a[r];
			a[l]-=a[r];
			r--;
		}else if(a[l]<a[r]&&b[l]!=b[r]){
			ans+=a[l];
			a[r]-=a[l];
			l++;
		}else if(b[l]==b[r]){
			a[i]-=min(a[l],a[r]);
			a[i]-=min(a[l],a[r]);
			if(a[i]==min(a[l],a[r])){
				l++;
			}else r--;
				}
	}if(n%2==1)ans+=a[r];
	cout<<ans;
	return 0;
}
 
