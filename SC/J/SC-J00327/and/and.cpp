#include<bits/stdc++.h>
using namespace std;
int a[200005];
int zhuan(int x){
	int ans=0,e=0;
	while(x>0){
		ans=ans+((x%2)*pow(10,e++));
		x/=2;
	}
	return ans;
}
int zhuan2(int x){
	int ans=0,e=1;
	while(x>0){
		ans=ans+(x%10)*e;
		x/=10;
		e*=2;
	}
	return ans;
}
int andl(int x,int y){
	int ans=0,e=0;
	x=zhuan(x);
	y=zhuan(y);
	while(x>0&&y>0){
		if(x%10==y%10){
			ans=ans+(1*pow(10,e++));
		}else ans=ans+(0*pow(10,e++));
		x/=10;
		y/=10;
	}
	return zhuan2(ans);
}
int main(){
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");
	int n,m,mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			mx=max(andl(a[i],a[j]),mx);
		}
	}
	cout<<mx;
	
	return 0;
}