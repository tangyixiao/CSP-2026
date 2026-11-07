#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		long long ma=-1;
		for(int i=1;i<=n;i++){
			ma=max(ma,a[i]);
		}
		cout<<ma;
		return 0;
	}
	if(m==2){
		long long ma=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ma=max(ma,a[j]&a[i]);
			}
		}
		cout<<ma;
		return 0;
	}
	if(m==n){
		int ma=a[1];
		for(int i=2;i<=n;i++){
			ma=ma&a[i]; 
		}
		cout<<ma;
		return 0;
	}
	if(m==n-1){
		int ma=a[1];
		for(int i=2;i<=n;i++){
			for(int j=2;j<=n;j++){
				if(j==1) continue;
				ma=ma&a[j];
			}
		}
		int maa=a[2];
		for(int i=3;i<=n;i++){
			maa=maa&a[i]; 
		}
		cout<<max(maa,ma);
		return 0;
	}
	if(m==3){
		long long maa=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				for(int k=1;k<=n;k++){
					if(k==j || k==i) continue;
					maa=max(maa,a[i]&a[j]&a[k]);
				}
			}
		}
		cout<<maa;
		return 0;
	}
	if(m==4){
		long long maa=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				for(int k=1;k<=n;k++){
					if(k==j || k==i) continue;
					for(int m=1;m<=n;m++){
						if(m==i || m==k || m==j) continue;
						maa=max(maa,a[i]&a[j]&a[k]&a[m]);
					}
				}
			}
		}
		cout<<maa;
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}