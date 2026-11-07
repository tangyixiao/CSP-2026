#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int maxx=0;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
	}else if(m==n){
		int cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=cnt&a[i];
		}
	}else if(m==2){
		int maxx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			//	cout<<maxx<<endl;
			}
		}
		cout<<maxx;
	}else if(m==n-1){
		sort(a+1,a+n+1);
		int cnt1=a[2];
		for(int i=3;i<=n;i++){
			cnt1=cnt1&a[i];
		}
		int cnt2=a[1];
		for(int i=2;i<n;i++){
			cnt2=cnt2&a[i];
		}
		cout<<max(cnt1,cnt2);
	}else{
		sort(a+1,a+n+1);
		int cnt=a[n];
		for(int i=n-1;i>=n-m;i--){
			cnt=cnt&a[i];
		}
		cout<<cnt;
	}
	return 0;
}
