#include<bits/stdc++.h>
using namespace std;
int a[200005],ans=-114514;
int aa=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		aa=max(aa,a[i]);
	}
	if(n<=2000){
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i!=j){
						int h=a[i]&a[j];
						ans=max(ans,h);
					}
				}
			}
			cout<<ans;
			return 0;
		}
		if(m==1){
			for(int i=1;i<=n;i++){
				ans=max(a[i],ans);
			}
			cout<<ans;
			return 0;
		}
	}
	else{
		cout<<aa;
	}
	
}
