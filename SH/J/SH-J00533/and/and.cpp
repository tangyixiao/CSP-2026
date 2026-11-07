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
	if(m==1){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			if(a[i]>maxn){
				maxn=a[i];
			}
			
		}
		cout<<maxn;
	}
	else if(m==n){
		int ans=1;
		for(int i=1;i<=n;i++){
			ans&=a[i];
			
		}
		cout<<ans;
	}
	else if(m==2){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>maxn){
					maxn=(a[i]&a[j]);
				}
			}
		}
		cout<<maxn;
	}
	return 0;
}
