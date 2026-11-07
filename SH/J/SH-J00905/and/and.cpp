#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
int a[N],vis[N];
bool mi(int a[]){
	for(int i=1;i<=n;i++){
		for(int k=1;k<=20;k++){
			if((a[i]+1)==pow(2,k)){
				vis[i]=1;
				continue;
			}
		}
		if(vis[i]==0) return false;
	}
	return true;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	scanf("%d%d",&n,&m);
	int max_a=-1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		max_a=max(max_a,a[i]);
	}
	int sum=a[1];
	if(m==1){
		printf("%d",max_a);
		return 0;
	}
	for(int i=2;i<=n;i++){
		sum&=a[i];
	}
	if(m==n){
		printf("%d",sum);
		return 0;
	}
	if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int t=a[i]&a[j];
				ans=max(ans,t);
			}
		}
		printf("%d",ans);
		return 0;
	}
	if(m==n-1){
		int ans2=a[1]&sum;
		for(int i=2;i<=n;i++){
			int t2=a[i]&sum;
			ans2=max(ans2,t2);
		}
		printf("%d",ans2);
		return 0;
	}
	if(mi){
		sort(a+1,a+n+1,cmp);
		printf("%d",a[m]);
		return 0;
	}
	return 0;
}
