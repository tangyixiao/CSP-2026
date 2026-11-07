#include<bits/stdc++.h>
using namespace std;
int a[200010],s[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=a[i]&ans;
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int max=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(i!=j){
					int b=a[i]&a[j];
					if(b>max){
						max=b;
					}
				}	
			}
		}
		cout<<max;
		return 0;
	}
	if(m==3){
		int max=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				for(int k=j;k<=n;k++){
					if(i!=j&&j!=k&i!=k){
						int b=a[i]&a[j]&a[k];
						if(b>max){
							max=b;
						}
					}
				}	
			}
		}
		cout<<max;
		return 0;
	}
	return 0;
} 
