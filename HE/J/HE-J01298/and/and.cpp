#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[10001];
	cin>>n>>m;
	int ma=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j){
					ma=max(ma,a[i]&a[j]);
				}
			}
		}
	}else if(m==3){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int z=0;z>n;z++){
					if(i!=j && j!=z &&i!=z){
					ma=max(ma,a[i]&a[j]&a[z]);
					}	
				}
			}
		}
	}
	cout<<ma;
	return 0;
}

