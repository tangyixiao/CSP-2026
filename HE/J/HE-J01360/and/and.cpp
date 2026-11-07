#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],ma=INT_MIN;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				int s=a[i] and a[j];
				ma=max(s,ma);
			}
		}
		cout<<ma;	
	}else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int l=1;l<=n;l++){
					if(i==j||j==l||i==l) continue;
					int s=a[i] and a[j] and a[l];
					ma=max(s,ma);
				}
			}
		}
		cout<<ma;
	}else if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int l=1;l<=n;l++){
					for(int v=1;v<=n;v++){
						if(i==j||j==l||i==l||i==v||j==v||l==v) continue;
						int s=a[i] and a[j] and a[l] and a[v];
						ma=max(s,ma);
					}
				}
			}
		}
		cout<<ma;
	}
	return 0;
}
