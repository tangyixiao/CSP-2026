#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			ans=a[i];
			for(int j=i+k;j<=n;j++){
				ans=ans&a[j];
			}
			if(ans>=m){
			m=ans;
			}
		}
	
	}
	cout<<m;
	return 0;	
}
