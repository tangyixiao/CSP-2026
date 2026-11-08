#include<bits/stdc++.h>
using namespace std;
long long a[210000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	if(n==1){
		cout<<a[n];
		return 0;
	}
	if(m==1){
		cout<<a[1];
		return 0;
	}
	int x=a[1],y=a[2];
	for(int i=1;i<=m;i++){
		ans=x&y;
		x=ans;y=a[i+2];
		/*int L=1,R=n,mid=n/2;
		while(1){
			if(L==R) break;
			if(ans>a[L]&&a[mid]>ans){
				L=mid;
				mid/=2;
			}
			if(ans<a[R]&&a[mid]<ans){
				R=mid;
				mid/=2;
			}
			if(ans==a[L]||ans==a[R]){
				y=ans;
				break;
			}
			
		}*/
	}
	cout<<ans;
	return 0;
}
