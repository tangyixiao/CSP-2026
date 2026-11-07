#include<bits/stdc++.h>
using namespace std;
long long n,m,ans=0;
int a[200005];
char c[200005];
int main(){
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	int l=1,r=n;
	for(int i=1;i<=m;i++){
		if(a[l]==0)l++;
		if(a[r]==0)r--;
		if(l>=r)break;
		if(c[l]==c[r]){
			if(a[l]>=a[r]){
				a[l]-=a[r];
				a[r]=0;
			}
			else{
				a[r]-=a[l];
				a[l]=0;
			}
		}else{
			if(a[l]>=a[r]){
				a[l]-=a[r];
				ans+=a[r];
				a[r]=0;
			}
			else{
				a[r]-=a[l];
				ans+=a[l];
				a[l]=0;
			}
		}
	}
	cout<<ans; 
	return 0;
}
