#include<bits/stdc++.h>
using namespace std;
bool flag[40];
int n,m;
int a[200010];
bool u[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		u[i]=1;
	}
	for(int k=29;k>=0;k--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(u[i]){
				cnt+=((a[i]|(1<<k))==a[i]);	
			}
		}
		if(cnt>=m){
			flag[k]=1;
			for(int i=1;i<=n;i++){
				if(!(u[i]&&((a[i]|(1<<k))==a[i]))){
					u[i]=0;
				}
			}
		}
	}
	int ans=0;
	for(int i=29;i>=0;i--){
		if(flag[i]){
			ans|=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}