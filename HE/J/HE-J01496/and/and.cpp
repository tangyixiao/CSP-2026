#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=-1e9;
	cin>>n>>m;
	int s[100000];
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if(s[i]>=mx){
			mx=s[i];
		}
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	mx=-1e9;
	if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				if((s[i]&s[j])>=mx){
					mx=s[i]&s[j];
				}
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==3){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				for(int x=1;x<=n-1;x++){
					if((s[i]&s[j]&s[x])>=mx){
						mx=s[i]&s[j]&s[x];
					}
				}		
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==4){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				for(int x=1;x<=n-1;x++){
					for(int y=1;y<=n-1;y++){
						if((s[i]&s[j]&s[x]&s[y])>=mx){
							mx=s[i]&s[j]&s[x]&s[y];
						}
					}
				}		
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==5){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				for(int x=1;x<=n-1;x++){
					for(int y=1;y<=n-1;y++){
						for(int z=1;z<=n-1;z++){
							if((s[i]&s[j]&s[x]&s[y]&s[z])>=mx){
								mx=s[i]&s[j]&s[x]&s[y]&s[z];
							}
						}
					}
				}		
			}
		}
		cout<<mx;
		return 0;
	}
	mx=s[1];
	if(m==n){
		for(int i=2;i<=n-1;i++){
			mx=mx&s[i];
		}
		cout<<mx;
		return 0;
	}
	return 0;
} 
