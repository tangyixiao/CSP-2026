#include<bits/stdc++.h>
using namespace std;
int n,m;
long long maxx;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(i!=j){
					if(maxx<(a[i]&a[j])){
						maxx=(a[i]&a[j]);
					}
				}
		    }
		}
	}
	if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				for(int k=j;k<=n;k++){
					if(i!=j && i!=k && j!=k){
						if(maxx<((a[i]&a[j])&a[k])){
							maxx=((a[i]&a[j])&a[k]);
						}
					}
				}
		    }
		}
	}
	if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				for(int k=j;k<=n;k++){
					for(int l=k;l<=n;l++){
						if(i!=j && i!=k && j!=k && i!=l && k!=l &&j!=l){
							if(maxx<(((a[i]&a[j])&a[k])&a[l])){
								maxx=(((a[i]&a[j])&a[k])&a[l]);
							}
						}
					}
				}
		    }
		}
	}
	cout<<maxx;
	return 0;
}

