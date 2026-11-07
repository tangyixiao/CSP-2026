#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
		int max=-1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j){
					if(a[i]&a[j]>max)
						max=a[i]&a[j];
				}
			}
		}
		cout<<max;
		return 0;
	}
	if(m==3){
		int max=-1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					if(i!=j&&j!=k&&i!=k){
						if(a[i]&a[j]&a[k]>max)
							max=a[i]&a[j]&a[k];
					}
				}
			}
		}
		cout<<max;
		return 0;
	}
	return 0;
}
