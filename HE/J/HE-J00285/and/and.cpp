#include<bits/stdc++.h>
using namespace std;
int ans,n,m,a[200010];
bool cmp(int a,int b){
	return a>b; 
}
void kfc1(){
	ans=0x7fffffff;
	for(int i=1;i<=n;i++){
		ans&=a[i];
	}
	cout<<ans;
}
void kfc2(){
	ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	cout<<ans;
}
void dfs(){
	sort(a+1,a+1+n,cmp);
	ans=0;
	for(int l=30;l>=0;l--){
		int k=0;
		for(int i=1;i<=n&&a[i]>=(1<<l);i++){
			if((a[i]&(1<<l))&&(a[i]&ans)==ans)k++;
		}
		if(k>=m)ans=(1<<l)|ans;
	}
	cout<<ans;

}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
	}
	if(n==m){
		kfc1();
	}else if(m==1){
		kfc2();
	}else{
		dfs();
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
