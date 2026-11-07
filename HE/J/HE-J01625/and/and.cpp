#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int m,n;
long long mx=-1,ans=2147483647,a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&(a[i]));
	}
	if(m==1){
		for(int i=1;i<n;i++){
			mx=max(a[i],mx);
		}
		printf("%d",mx);
		return 0;
	}
	if(m==n){
		for(int i=1;i<n;i++){
			ans&=(a[i]);
		}
		printf("%d",ans);
		return 0;
	}
	if(m==n-1){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==i){continue;}
				ans&=(a[j]);
			}
			mx=max(ans,mx);
		}
		printf("%d",mx);
		return 0;
	}
	printf("%d",1);
	return 0;
}
