#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,m,ans=-1;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n-1];
	}
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(a[i]&a[j]>ans){
    			ans=a[i]&a[j];
			}
		}
	}
	cout<<ans;
}