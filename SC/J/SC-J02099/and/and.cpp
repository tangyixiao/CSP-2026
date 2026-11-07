#include<bits/stdc++.h>
using namespace std;
long long int a[200005];
int finde[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	int maxx=0;
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>maxx){
				maxx=a[i];
			}
		}
	}
	else if(m==n){
		maxx=a[1];
		for(int i=1;i<n;i++){
			maxx=maxx&a[i+1];
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				int k=a[i]&a[j];
				if(k>maxx){
					maxx=k;
				}
			}
		}
	}
	else{
		bool ok=false,op=false;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				int k=a[i]&a[j];
				if(k==0){
					ok=true;
				}
				else{
					ok=false;
					if(k==1){
						op=true;
					}
					else{
						op=false;
					}
				}
			}
		}
		if(ok){
			maxx=0;
			
		}
		if(op){
			maxx=1;
		}
		if(!(op||ok)){
			maxx=3;
		}
	}
	printf("%d",maxx);
	return 0;
}  