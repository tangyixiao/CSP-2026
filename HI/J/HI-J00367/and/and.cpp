#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,c;
	cin>>n>>c;
	int t1=2*n,t2=n+1;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxn=-100;
	if(c==1) {
		cout<<n;
		return 0;
	}
	if(c==2){
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(a[i]==a[j]) continue;
				int nn=a[i] & a[j]; 
				maxn=max(nn,maxn);
			}
		}
		cout<<maxn;
		return 0;
	}
	else if(c==3) {
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				for(int k=j;k<n;k++){
					if(a[i]==a[j]||a[i]==a[k]||a[j]==a[k]) continue;
					int nn=a[i] & a[j] & a[k]; 
					maxn=max(nn,maxn);
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	else if(c==4) {
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				for(int k=j;k<n;k++){
					for(int l=k;l<n;l++){
						if(a[i]==a[j]||a[i]==a[k]||a[j]==a[k]||a[i]==a[l]||a[j]==a[l]||a[k]==a[l]) continue;
						int nn=a[i] & a[j] & a[k] & a[l]; 
						maxn=max(nn,maxn);
					}
					
					
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	else if(c==5) {
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				for(int k=j;k<n;k++){
					for(int l=k;l<n;l++){
						for(int r=l;r<n;r++){
							if(a[i]==a[j]||a[i]==a[k]||a[j]==a[k]||a[i]==a[l]||a[j]==a[l]||a[k]==a[l]||a[i]==a[r]||a[j]==a[r]||a[k]==a[l]||a[l]==a[r]) continue;
							int nn=a[i] & a[j] & a[k] & a[l]; 
							maxn=max(nn,maxn);
						}
					}
					
					
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	cout<<10;
	return 0;
}
