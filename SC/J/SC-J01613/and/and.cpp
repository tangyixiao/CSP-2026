#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		ans=a[1];
		for(int i=1;i<n;i++){
			ans=(ans&a[i+1]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==n-1){
		int cnt=0;
		for(int i=1;i<=n;i++){
			bool ok=0;
			if(i==1){
				int cnt=a[i+1];
				ok=1;
			}
			else{
				cnt=a[1];
				ok=0;
			}			
			for(int j=1;j<n;j++){
				if(ok==1){
					if(j+1==i||j+1==i+1){
						continue;
					}
					cnt=(cnt&a[j+1]);
				}
				if(ok==0){
					if(j+1==i){
						continue;
					}
					cnt=(cnt&a[j+1]);
				}
			}
			ans=max(cnt,ans);
		}
		cout<<ans;
		return 0;
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(a[i],ans);
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max((a[i]&a[j]),ans);
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					ans=max((a[i]&a[j]&a[k]),ans);
				}				
			}
		}
		cout<<ans;
		return 0;
	}
	return 0;	
}