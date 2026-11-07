#include<bits/stdc++.h>
using namespace std;
int anda[1000001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int andn,andm,andda=-1;
	cin>>andn>>andm;
	for(int i=1;i<=andn;i++) cin>>anda[i];
	if(andm==1){
		for(int i=1;i<=andn;i++){
			andda=max(andda,anda[i]);
		}
	}
	if(andm==2){
		for(int i=1;i<=andn;i++){
			for(int j=i+1;j<=andn;j++){
				andda=max(andda,anda[i]&anda[j]);
			}
		}
	}
	if(andm==3){
		for(int i=1;i<=andn;i++){
			for(int j=i+1;j<=andn;j++){
				for(int k=j+1;k<=andn;k++) andda=max(andda,anda[i]&anda[j]&anda[k]);
			}
		}
	}
	if(andm==4){
		for(int i=1;i<=andn;i++){
			for(int j=i+1;j<=andn;j++){
				for(int k=j+1;k<=andn;k++){
					for(int o=k+1;o<=andn;o++) andda=max(andda,anda[i]&anda[j]&anda[k]&anda[o]);
				} 
			}
		}
	}
	if(andm==5){
		for(int i=1;i<=andn;i++){
			for(int j=i+1;j<=andn;j++){
				for(int k=j+1;k<=andn;k++){
					for(int o=k+1;o<=andn;o++){
						for(int p=o+1;p<=andn;p++) andda=max(andda,anda[i]&anda[j]&anda[k]&anda[o]&anda[p]);
					} 
				} 
			}
		}
	}
	if(andm==6){
		for(int i=1;i<=andn;i++){
			for(int j=i+1;j<=andn;j++){
				for(int k=j+1;k<=andn;k++){
					for(int o=k+1;o<=andn;o++){
						for(int p=o+1;p<=andn;p++){
							for(int zz=p+1;zz<=andn;zz++) andda=max(andda,anda[i]&anda[j]&anda[k]&anda[o]&anda[p]&anda[zz]);
						} 
					} 
				} 
			}
		}
	}
	if(andm==7){
		for(int i=1;i<=andn;i++){
			for(int j=i+1;j<=andn;j++){
				for(int k=j+1;k<=andn;k++){
					for(int o=k+1;o<=andn;o++){
						for(int p=o+1;p<=andn;p++){
							for(int zz=p+1;zz<=andn;zz++){
								for(int zzz=zz+1;zzz<=andn;zzz++) andda=max(andda,anda[i]&anda[j]&anda[k]&anda[o]&anda[p]&anda[zz]&anda[zzz]);
							} 
						} 
					} 
				} 
			}
		}
	}
	cout<<andda;
	return 0;
}
/*
4 2
3 15 12 12

*/