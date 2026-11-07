#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 200005
ll n,m,ls[N],man=0;
bool flg=1;
bool ck(ll x){
	while(x>1){
		if(x%2==0){
			x/=2;
//			cout<<x<<',';
		}else{
//			cout<<';'<<x<<endl; 
			return 0;
		}
	}
//	cout<<"pas"<<endl; 
	return 1;
}
void dps(ll p,ll c,ll s){
	if(s<=man && s!=-1){
		return ;
	}
	if(p>n){
		man=max(man,s);
		return ;
	}
	dps(p+1,c,s);
	if(c<m){
		if(s==-1) dps(p+1,c+1,ls[p]);
		else dps(p+1,c+1,s&ls[p]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>ls[i];
		if(flg==1 && ck(ls[i]+1)==0){
			flg=0;
		}
	} 
	sort(ls+1,ls+n+1);
	if(ck(n)==1){
		man=ls[n];
		for(ll i=n-1;i>=n-m+1;i--){
			man=(man&ls[i]);
		}
		cout<<man<<"\n";
		return 0;
	}
	if(flg==1){
		cout<<ls[n-m+1]<<"\n";
		return 0;
	}
	if(m==n){
		man=ls[1];
		for(ll i=2;i<=n;i++){
			man=(man&ls[i]);
		}
		cout<<man<<"\n";
		return 0;
	}
	if(m==2 && n<=2000){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				man=max(man,(ls[i]&ls[j]));
			}
		}
		cout<<man<<"\n";
		return 0;
	}
	if(m==1){
		cout<<ls[n]<<"\n";
		return 0;
	}
	if(n<=20){
		dps(1,0,-1);
		cout<<man<<"\n";
		return 0;
	} 
	if(m==n-1){
		cout<<0<<"\n";
		return 0;
	}
//	man=ls[n];
//	for(ll i=n-1;i>=n-m+1;i--){
//		man=(man&ls[i]);
//	}
	dps(1,0,-1);
	cout<<man<<"\n";
	return 0;
}
