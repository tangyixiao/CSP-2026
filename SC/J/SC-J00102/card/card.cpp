#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		for(int i=1;i<=m;i++){
			cout<<a[i];
		}
	} 
	if(n!=m){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1){
				cnt++;
			}
		}
		if(cnt%2==0){
			for(int j=n;j>=1;j++){
				if(a[j]==1){
					cout<<n-j;
				} 
			}
		}
		int ans=0;
		for(int s=1;s<=n;s++){
			for(int o=2;o<=m;){
				if(a[s]==o){
					ans++;
					o++;
				}
				else
				{
					cout<<ans+1;
				}
				cout<<ans;
			}
		}
	}
    return 0;
}