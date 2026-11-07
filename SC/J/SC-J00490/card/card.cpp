#include <bits/stdc++.h>
using namespace std;
main(){
	freopen("travel.in","r",in);
	freopen("travel.out","w",our);
	int n,m;
    cin>>n>>m;
	int a[n-1],a1[n-1],num[n-1];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
		a1[i]=a[i];
		num[i]=0;
	}
	
	for(int q=0;q<n;q++){
		for(int i=q;i<=n-1;i++){
			a[i]=a1[i];
		}
		for(int i=q;i<n;i++){
			for(int j=i;j>q;j--){
				if(a[i]==a[j]&&a[i]!=0){
					for(int o=j-1;o<=i-1;o++){
						a[o]=0;
					}
				}
			}
		}  
		
		for(int i=1;i<=m;i++){
			for(int j=0;j<=n;j++){
				if(a[j]==i){
					num[i]+=1;
				}
			} 
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}