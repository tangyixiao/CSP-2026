#include<bits/stdc++.h>
#define L long long
using namespace std;
int a[1000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	L n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==n){
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
	}
	if(m==n-1){
		sort(a,a+n);
		for(int i=1;i<n;i++){
			cout<<a[i];
		}
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
	}
	int ans=0;
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]&a[j]>ans){
					ans=a[i]&a[j];
				}
			}
		}
		cout<<ans;
	}
	return 0;
}
