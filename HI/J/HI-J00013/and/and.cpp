#include<bits/stdc++.h>
using namespace std;
int a[200005],maxn=0,x=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		x=a[1];
		for(int i=1;i<=n;i++){
			x=x&a[i];
		}
		cout<<x;
		return 0;
	}
	
	
	bool q=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1){
			q=1;
		}
	}
	if(q==0){
		cout<<n-m;
		return 0;
	}
	if(m==2){
		int maxp=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int o=a[i]&a[j];
				maxp=max(maxp,o);
			}
		}
	}
	int maxm=a[1];
		for(int i=1;i<=n;i++){
			x=0;
			for(int j=1;j<=n;j++){
				if(a[i]<=a[j]&&(i!=j)){
				x++;
				}
				if(x>m+2){
					break;
					
				}
				
			}
			
			if(x==m-1){
				maxm=a[i];
			}	
		}
		cout<<maxm;
		
	return 0;
}
