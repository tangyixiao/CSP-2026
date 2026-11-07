#include<bits/stdc++.h>
using namespace std;
int n,m,a[200000],c,cnt,ans; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(m==1){
				ans=max(a[i],ans);
			}
			else if(m==2){
				c=a[i]&a[j];
				ans=max(c,ans); 
			}
			else if (m==n){
				ans=a[i]&a[j];
			}
		}
	}
	cout<<ans;
	return 0;
}
