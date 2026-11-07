#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans=-1;
void go(int i,int x,int s){
	if(i==m){
		ans=max(ans,s);
		return;
	}
	for(int j=x+1;j<=n;j++){
		if(i==0){
			go(i+1,j,a[j]);
		}else{
			go(i+1,j,s&a[j]);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int da=-1,ans1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		da=max(da,a[i]);
		if(i==1){
			ans1=a[i];
		}else{
			ans1=ans&a[i];
		}
	}if(m==1){
		cout<<da;
		return 0;
	}
	if(m==n){
		cout<<ans;
		return 0;
	}
	if(n<=20){
		go(0,0,0);
		cout<<ans;
		return 0;
	}
	return 0;
}