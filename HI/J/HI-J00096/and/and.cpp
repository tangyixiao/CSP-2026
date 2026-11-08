#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		int num=a[1]&a[2];
		for(int i=3;i<=n;i++){
			num=num&a[i];
		}
		cout<<num;
		return 0;
	}
	int maxn=0;
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>maxn){
					maxn=a[i]&a[j];
				}
			}
		}
		cout<<maxn;
	}
	if(m==3){
		for(int i=1;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<=n;k++){
					int t=a[i]&a[j]&a[k];
					if(t>maxn){
						maxn=t;
					}
				}
			}
		}
		cout<<maxn;
	}
	if(m==4){
		for(int i=1;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					for(int p=k+1;p<=n;p++) {
						int t=a[i]&a[j]&a[k]&a[p];
						if(t>maxn){
							maxn=t;
						}
					}
				}
			}
		}
		cout<<maxn;
	}
	return 0;
}
