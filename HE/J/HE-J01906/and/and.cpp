#include<bits/stdc++.h>
using namespace std;
int a[200001];
int cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans,zd=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==m){
		for(int i=2;i<=n;i++) a[1]=a[1]&a[i];
		cout<<a[1];
	}
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=a[i]&a[j];
				zd=max(zd,ans);
			}
		}
		cout<<zd;
	}
	else{
		sort(a+1,a+n+1,cmp);
		for(int i=1;i<=n;i++) a[1]=a[1]&a[i];
		cout<<a[1];
	}
	return 0;
} 
