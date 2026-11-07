#include <bits/stdc++.h>
using namespace std;
long long n,m,a[222222];
long long ans=-1;
bool chs[222222];//xuan le shen me
bool all2n=true;
int  up2k[20]={1};
void planA1(){
	for(int i=1;i<=n;i++){ ans=max(ans,a[i]); }
	cout<<ans;
}		
void planA2(){
	ans=a[1];
	for(int i=1;i<=n;i++){ ans=(ans&a[i]); }
	cout<<ans;
}
void planC(int sum,int now){
	if(sum>m) { return ; }	
	if(now==n){ 
//	    cout<<"\n/sum="<<sum<<"m="<<m<<' ';
		if(sum!=m){ return ; }
		long long andsum=-2;
		for(int i=1;i<=n;i++){
			if(!chs[i]){ continue; }
//			cout<<a[i]<<"/"; 
			if(andsum==-2){
//				cout<<"A";
				andsum=a[i];
			}else{
//				cout<<"B";
				andsum=(andsum&a[i]);
			}
//			cout<<"/";
		}
//		cout<<" &/ans="<<andsum<<"/\n";
		ans=max(andsum,ans);
		return ;
	}
	now+=1;
	chs[now]=true; 
	planC(sum+1,now);
	chs[now]=false; 
	planC(sum  ,now);
	chs[now]=true; 
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	freopen("and4.in","r",stdin);
	cin>>n>>m;
	int equ=0;
	for(int i=1;i<=17;i++){ up2k[i]=up2k[i-1]; }
	for(int i=1;i<=n ;i++){
		cin>>a[i]; 
		for(auto j:up2k){
			if(a[i]-1==up2k[j]){ equ+=1; }
		}
	}
	if(m==1||equ==n){ 
//		cout<<"/planA!  ";
		planA1(); 
		return 0; 
	}
	if(m==n){ 
//		cout<<"/planB!  ";
		planA2(); 
		return 0; 
	}
	planC(0,0);
	cout<<ans;
	return 0;
}
