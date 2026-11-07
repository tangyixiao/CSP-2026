#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=0;
void solv1(int i,int x,int ands){
	if(i>n){
		if(x==m and ands>ans) ans=ands;
		return;
	}
	if(x==m) solv1(n+1,x,ands);
	if(x+n-i+1<m) return;
	if((ands&a[i])>0) solv1(i+1,x+1,(ands&a[i]));
	solv1(i+1,x,ands);
}
void solv2(){
	if(m==1){
		for(int i=1;i<=n;i++) if(a[i]>ans) ans=a[i];
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans=(ans&a[i]);
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]!=a[j] and (a[i]&a[j])>ans) ans=(a[i]&a[j]);
			}
		}
	}
	return;
}
void solv3(){
	int f1[200005]={0},f2[200005]={0};
	f1[1]=a[1];
	for(int i=2;i<=n;i++) f1[i]=(f1[i-1]&a[i]);
	f2[n]=a[n];
	for(int i=n-1;i>=1;i--) f2[i]=(f2[i+1]&a[i]);
	for(int i=2;i<n;i++) if((f1[i-1]&f2[i+1])>ans) ans=(f1[i-1]&f2[i+1]);
	if(f1[n-1]>ans) ans=f1[n-1];
	if(f2[2]>ans) ans=f2[2];
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20){
		long long js=1,s=0;
		for(int i=0;i<=31;i++) s+=js,js*=2;
		solv1(1,0,s);
	}else if(n<=2000) solv2();
	else if(m==n-1) solv3();
	else{
		long long js=1,s=0;
		for(int i=0;i<=31;i++) s+=js,js*=2;
		solv1(1,0,s);
	}
	cout<<ans;
	return 0;
}