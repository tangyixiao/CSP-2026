#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		int mx=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>mx)mx=a[i]&a[j];
			}
		}
		cout<<mx;
	}
	if(m==n){
		int x=a[1]&a[2];
		for(int i=3;i<=n;i++){
			x=x&a[i];
		}
		cout<<x;
	}
	if(m==n-1){
		sort(a+1,a+n+1);
		int x=a[2]&a[3];
		for(int i=4;i<=n;i++){
			x=x&a[i];
		}
		cout<<x;
	}
	return 0;
} 
