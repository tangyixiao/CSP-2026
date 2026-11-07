#include<bits/stdc++.h>
using namespace std;
int n,m,a[2010],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans=max(ans,a[i]);
	}
	if(m==2){
		ans=-1e8;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i] & a[j]);
			}
		}
	}
	cout<<ans;
} 
