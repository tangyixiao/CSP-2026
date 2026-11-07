#include<bits/stdc++.h>
using namespace std;
long long a[200100];
int n,m;
long long mx=0;
void dfs(int num,int sum,int i){
	if(i==n+1){
		if(num==m){
			if(sum>mx){
				mx=sum;
			}
		}
		return ;
	}
	if(num==m){
		if(sum>mx){
			mx=sum;
		}
		return ;
	}
	if(num==0){
		sum=a[i];
	}
	dfs(num+1,sum&a[i],i+1);
	if(num==0){
		sum=0;
	}
	dfs(num,sum,i+1);
}
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	scanf("%d%d",&n,&m);
	long long mxn=0;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		if(mxn<a[i]){
			mxn=a[i];
		}
	}
	if(m==1){
		printf("%lld",mxn);	
	}
	else if(n<=50){
		dfs(0,0,1);
		printf("%lld",mx);
	}
	else{
		printf("0");
	}
	return 0;
}