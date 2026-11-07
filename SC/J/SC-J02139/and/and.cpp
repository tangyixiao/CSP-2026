#include<bits/stdc++.h>
const int N=200005;
using namespace std;
long long m,n,a[N],ans,z;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(m==1){
		for(int i=0;i<n;i++){
			z=max(z,a[i]);
		}
	}
	else if(m==n){
		z=a[0];
		for(int i=1;i<n;i++){
			z=z&a[i];
		}
	}
	else if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				z=max(z,a[i]&a[j]);
			}
		}
	}
	else if(m==3){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<n;k++)
				z=max(z,a[i]&a[j]&a[k]);
			}
		}
	}
	
	printf("%d",z);
	fclose(stdin);
	fclose(stdout);
	return 0;
}