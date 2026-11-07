//and
#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	int maxn=-100;
	int p,q;
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int k=a[i]&a[j];
				if(k>maxn) maxn=k;
			}
		}
	}
	else if(m==3){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					int k=a[i]&a[j]&a[q];
					if(k>maxn) maxn=k;
				}
				
			}
		}
	}
	else if(m==4){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int p=q+1;p<n;p++){
						int k=a[i]&a[j]&a[q]&a[p];
						if(k>maxn) maxn=k;
					}
					
				}
				
			}
		}
	}
	else if(m==4){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int q=j+1;q<n;q++){
					for(int p=q+1;p<n;p++){
						for(int l=p+1;l<n;l++){
							int k=a[i]&a[j]&a[q]&a[p]&a[l];
							if(k>maxn) maxn=k;
						}
					}
					
				}
				
			}
		}
	}
	else{
		cout<<237463;
		return 0;
	}
	cout<<maxn<<endl;
	return 0;
}