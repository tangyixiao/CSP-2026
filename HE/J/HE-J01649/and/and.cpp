#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==m){
		int sum=0;
		for(int i=1;i<=n;i++){
			sum = sum&a[i];
		}
		cout<<sum;
		return 0;
	}else if(m==1){
		int Maxn = 0;
		for(int i=1;i<=n;i++){
			Maxn=max(Maxn,a[i]);	
		}
		cout<<Maxn;
		return 0;
	}else if(m==2){
		int Maxn = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
			if(i!=j){
			    Maxn=max(Maxn,a[i]&a[j]);	
			}
		    }
		}
		cout<<Maxn;
		return 0;
	}else if(m==3){
		int Maxn = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
				if(i!=j&&j!=k&&i!=k){
			    Maxn=max(Maxn,a[i]&a[j]&a[k]);	
			}
	            }
			}
		}
			
		cout<<Maxn;
		return 0;
	}
	return 0;
}
