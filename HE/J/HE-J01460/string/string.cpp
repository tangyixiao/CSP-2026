#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int ans;
int a[200010];
int aa[200010];
int sum;
char b[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int L=0,R=0;
	for(int l=1,r=n;l<r;){
		if(b[l]==b[r]){
//			if(l==r||abs(l-r)==1){
//				continue;
//			}
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[r]>a[l]){
				a[r]-=a[l];
				l++;
			}else{
				l++;
				r--;
			}
		}else{
			if(l==r){
				continue;
			}
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}else if(a[r]>a[l]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}else{
				ans+=a[l];
				l++;
				r--;
			}
		}
//		cout<<l<<" "<<r<<" "<<a[l]<<" "<<a[r]<<" "<<ans<<"\n";
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
